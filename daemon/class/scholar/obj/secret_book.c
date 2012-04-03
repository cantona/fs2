// by Onion.
//fixed by Lum 6/25/1996 ��������������Ҳ�ܶ������Bug��
inherit ITEM;
string TITLE="[����]";
string DESTRUCT_MESSAGE=TITLE+"�Ȿ���Ų������,����������᳤���������˽���ȡ�˻�ȥ��\n";
object me=this_player();
object ob=this_object();
mapping valid_types = ([
        "literate":     "����ʶ��",
        "unarmed":      "ȭ��",
        "sword":        "����",
        "blade":        "����",
        "stick":        "����",
        "staff":        "�ȷ�",
        "throwing":     "����",
        "force":        "�ڹ�",
        "parry":        "�м�",
        "dodge":        "�Ṧ",
        "magic":        "����",
         "spells":       "����",
        "move":         "�ж�",
        "array":        "��",
        "dagger":       "ذ��",
        "cure":         "ҽ��",
        "plan":         "��ı",
        "stabber":      "����",
        "be-officer":   "����",
        "whip":         "�޷�",
        "poison":       "�ö�",
]);
 
void create()
{
      set_weight(0);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","��");
           set("long","����һ�������书������, ͨ��ֻ������֮�����˲���ƾ��"+
           "�����ѧʶ���������书�ķ���¼������\n"+
           "����<help secret_book>�ɻ�ø������Ѷ��");
           set("value",0);
           set("no_drop",1);
           set("no_get",1);
           }
      set("belong",getuid(me));
      setup();
}
 
void init()
{
        set_name(me->name(1)+ "���书����", ({ "secret_book" }));
        add_action("do_record","record");
        add_action("do_opento","opento");
        add_action("do_check","check");
        add_action("do_study","study");
        add_action("do_help","help");
}
int do_help(string str)
{
        if (str!="secret_book") return 0;
        write(@Help
 
        �����ʹ�����µļ�������:
        record <skill>          ��������ѧ��¼������
        opento <skill>          ���鷭����¼�˼��ܵĵط�, �����ж���
        check secret_book       ������������صļ��ܡ�
        study secret_book       �������ж�����, ���Ƚ��鷭����ȷ�ĵط���
 
Help
        );
        return 1;
}
int do_study(string str)
{
        if( str != "secret_book" )              return 0;
        if( ob->query("skill/name") != 0 )      return 0;
        if( me->query("class")!= "scholar")
          return notify_fail(TITLE+"���ڲ�������������˵,��ֻ��һ�����\n");
        if(me->query("id") != this_player()->query("id") ||
           ob->query("belong") != environment(this_object())->query("id"))
        {
          write(DESTRUCT_MESSAGE);
          destruct(ob);                         return 1;
        }
        write(TITLE+"���Ż�û��Ү��\n");              return 1;
}
int do_record(string skill_name)
{
        int skill_max,skill_now;
        if(me->query("id") != this_player()->query("id"))
        {
          destruct(ob);
          return notify_fail(DESTRUCT_MESSAGE);
        }
        if( skill_name == 0 )
          return notify_fail(TITLE+"��¼ʲô?\n");
        skill_now=me->query_skill(skill_name,1);
        skill_max=me->query("secret_book/"+skill_name);
        if( skill_now <= 0 )
          return notify_fail(TITLE+"��..������ܻ�û�����ա�\n");
        if( me->query("class")!= "scholar")
          return notify_fail(TITLE+"���ڲ�������������˵,��ֻ��һ�����\n");
        if( undefinedp(valid_types[skill_name]) )
          return notify_fail(TITLE+"��ֻ�ܼ�¼�������ܡ�\n");
        if( me->query_skill("literate",1) < skill_now )
          return notify_fail(TITLE+"���ѧʶ����, �޷���������ѧ��¼������\n");
        if( skill_max >= skill_now )
          return notify_fail(TITLE+"��Ŀǰ�ļ��ܲ�δ�����������صĸ߳�һ����\n");
        message_vision("$N�����������ɷ����д��һЩ������\n",me);
        me->set("secret_book/"+skill_name,skill_now-1);
        if( me->query_skill("literate",1) < skill_now )
        {
          write(TITLE+"���������ѧʶ����, �޷���������ѧ��ȫ��¼������\n");
          me->set("secret_book/"+skill_name,me->query_skill("literate",1)-1);
        }
        return 1;
}
int do_opento(string skill_name)
{
        int max_skill=me->query("secret_book/"+skill_name);
        if( skill_name == 0 )
          return notify_fail(TITLE+"�����Ƕ�?\n");
        if(me->query("id") != this_player()->query("id"))
        {
          destruct(ob);
          return notify_fail(DESTRUCT_MESSAGE);
        }
        if( me->query("secret_book/"+skill_name) == 0 )
          return notify_fail(TITLE+"������û���ᵽ����ܡ�\n");
        ob->set("skill/name",skill_name);
        ob->set("skill/max_skill",max_skill);
        ob->set("skill/sen_cost",(max_skill/20)+20);
        ob->set("skill/difficulty",20);
        setup();
        write(TITLE+"�㽫����չ������"+to_chinese(skill_name)+"������\n");
        return 1;
}
int do_check(string str)
{
        int i;
        mapping secret_book_skill;
        string *skill_name;
        if( str != "secret_book" )
          return notify_fail(TITLE+"���ʲô?\n");
        if(me->query("id") != this_player()->query("id"))
        {
          destruct(ob);
          return notify_fail(DESTRUCT_MESSAGE);
        }
        if( sizeof(me->query("secret_book")) == 0 )
          return notify_fail(TITLE+"������Ŀǰ����һƬ�հס�\n");
        secret_book_skill=me->query("secret_book");
        skill_name=keys(secret_book_skill);
        write(TITLE+"�����������м��صĻ������ܡ�\n");
        write("     ����        �ȼ�\n");
        for(i=0; i<sizeof(skill_name); i++)
          printf(" %-10s       %3d\n",to_chinese(skill_name[i]),me->query("secret_book/"+skill_name[i]));
        return 1;
}
 
int query_autoload()
{
        if( this_player()->query("class")=="scholar" )
          return 1;
        return 0;
}