#include <ansi.h>

inherit NPC;
inherit SSERVER;
string ask_moon();
string ask_sula();
int accept_kill(object who);
void create()
{
        set_name(HIM "����" NOR, ({ "king" }) );
        set("title","�������");
        set("gender", "����" );
        set("age",50);
        set("str",50);
        set("cor",45);
        set("cps",35);
        set("int",50);
        set("long",
            "һλ�ߴ�Ӣͦ�����ˣ����о�ֹ�����������޷����ܵ����ϡ�\n"
            "���ƺ���Щ����������������Ե��е������ѻ���\n");
        set("class","fighter");
        set("clan_kill",1);
        set("del_delay",1);
        set("no_hole",1);
        set("no_plan",1);
         set("no_plan_follow",1);

          set("capital_king",1);
        set("combat_exp",15500000);
        set("attitude", "heroism");
        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
            (: exert_function, "recover" :)
            }) );
     set_skill("dodge",250);
         set_skill("unarmed",250);
      set_skill("kingfist",250);
        set_skill("parry",250);

      set_skill("force",250);
      set_skill("fireforce",250);
      set_skill("bss-parry",250);
      set_skill("bss-steps",250);
        map_skill("force","fireforce");
        map_skill("unarmed","kingfist");
        map_skill("dodge","bss-steps");
        map_skill("parry","bss-parry");
          set("force",150000);
         set("max_force",100000);
          set("force_factor",40);
        set("max_gin",30000);
        set("gin",30000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_sen",30000);
        set("sen",30000);
        set("chat_chance", 15);
        set("chat_msg", ({
              "����˵: ���������ܲ\n",
              "����˵: �󹬼�����ǧ���������裬������æ�ù�����\n",
             "����˵: ���ȥ�����������ˡ�\n",
        }) );
		set("inquiry",([
	    "�°���"  :  (:ask_moon:),
		"sula"  :  (:ask_sula:)
	]));
        setup();
          carry_object("/open/capital/obj/king-belt")->wear();
carry_object("/open/capital/obj/secret_book");
          carry_object("/open/capital/obj/king-boots")->wear();
          carry_object("/open/capital/obj/king-cloak")->wear();
          carry_object("/open/capital/obj/king-cloth")->wear();
          carry_object("/open/capital/obj/king-ring")->wield();
          carry_object("/open/capital/guard/gring")->wear();
          add_money("gold",1000);

}

void init()
{
         object me=this_player();
         int force,be;

         be=me->query("bellicosity");
         force=me->query("force");
         if(be > force)
         {
         kill_ob(me);
         accept_kill(me);
         }

        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
        add_action("do_cmd","cmd");
}
int do_cmd(string str) {
 object who=this_player();
 if(str=="askgod king" || str=="askgod guard" || str=="askgod king guard") {
 who->start_busy(2);
 kill_ob(who);
 accept_kill(who);
} else if(str=="bak king" || str=="bak guard" || str=="askgod king guard") {
  who->start_busy(2);
  kill_ob(who);
  accept_kill(who);
} else if(str=="cmd throw king"  || str=="cmd throw guard"  || str=="cmd throw gua
rd"){
 who->start_busy(2);

 kill_ob(who);
 accept_kill(who);
}
 return 1;
}
int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        
        if(ob_id=="yua's letter")
        {
		if(this_player()->query("quests/moon")==1)
        return notify_fail("��Ҫ�����ΰ�???\n");
		if(!this_player()->query_temp("ask_moon7"))
        return notify_fail("��ƭ����??�ⲻ��������ױ���!!\n");
	    command("say ��������ױ���д����,лл������ҵ���\n");
         command("say ������֪����������,����̫����,�ǳ���лл��\n");
		 if(this_player()->query("gender")=="����")
         { 
		  message("system",HIM"����"HIR"����˵����"HIY"����"HIC""+this_player()->name()+""HIY"
�⿪�˾��µ�֮��,�����������������뾵�µ���\n"NOR,users());
		}
        this_player()->set("quests/moon",1);
        new("/obj/money/diamond")->move(this_player());
		new("/obj/money/diamond")->move(this_player());
        new("/obj/money/diamond")->move(this_player());
		command("say Ϊ�˱����޵�л��,��������ʯ�������� \n");
		}
  return 1;
 }
string ask_moon()
{   object who;
    who = this_player();
    if(!this_player()->query_temp("ask_moon2"))
	return "��....���ҿɲ��������������ʱ��˰ɡ�";
	 command("say ��֪����������??�������!!!");
	 command("say ����ô��֪������� ?");
	 this_player()->set_temp("ask_moon3",1);
	 kill_ob(who);
     accept_kill(who);
}
//add by cgy...�������
string ask_sula()
{   object who;
    who = this_player();
    if(this_player()->query("id")!="sula")
	return "��....�㲻�� sula����ô�����??";
	 command("say �ܺ�����������!!!");
	 this_player()->set("title",HIG"����ռ�"HIY"��Զ��"HIW"����"NOR);
	 message("system",HIM"����"HIR"����˵����"NOR"��"HIC"����а��"HIY"(sula)"NOR"��Ա���ڿ���ռ�\n
	 �����꣬һ·������ʼ����һ"HIC"(����)"NOR"�ش���"HIG"����ռ�"HIY"��Զ��"HIW"����"NOR"������ʱ��
	 
	            "HIM"�մ�  "HIG"л��  \n"NOR,users());
	
}
int do_fight(string arg)
{
        object who;
        who = this_player();

          if (!arg || arg!="king")
                return notify_fail("���빥��˭��\n");
        else {
                kill_ob(who);
                accept_kill(who);
        }

        return 1;
}

int accept_kill(object who)
{
         object ob, guard;
        ob = this_object();

        if( !present("kill guard", environment(ob)) ) {
          if (ob->query_temp("killking")!=1){
          tell_room(environment(ob),HIW"\nͻȻ�������λ��ǰ��������\n\n"NOR);
        guard = new(__DIR__"fuguard");
        guard->move(environment(ob));
        guard->command("defend king");
        guard->command("follow king");
        guard->kill_ob(who);
        guard = new(__DIR__"fuguard1");
        guard->move(environment(ob));
        ob->set_temp("killking",1);      
        guard->command("follow king");
        guard->kill_ob(who);
        tell_object(users(),HIR "��ǰ������У��д̿ͣ��챣�����£���\n" NOR);
        command("wear all");

}
         else {
              command("say �ɶ�  ...���ҵĵ�����..");
              tell_object(this_player(),HIC"ֻ���ޱȺ��ص�ѹ��Ӳ��������ѹ��\n"NOR
);
              this_player()->add("kee",-(this_player()->query("max_kee")/2));
    }

}
        return 1;
}
void heart_beat()
{     
        object enemy;
        object me=this_object();
        if(!me) return ;
          if(me->is_fighting())
		  {
        enemy=offensive_target(me);
if((me->query("kee") < me->query("max_kee")/10)&&(enemy->query_temp("ask_moon3")==1))
		  {
		   me->remove_all_killer();
		   command("say �Դ����뿪���Ҷ������Ѱ�ò���,Ҳ������ң֪�����������");
             command("say ������ҵ������Ұ�����Ž�����"); 
             new("/open/capital/obj/letter")->move(enemy);
             message_vision("���ϸ���$Nһ���� .\n",enemy);
             enemy->set_temp("ask_moon4",1);
		   }
         if(50 > random(100))
           {
        me->delete_busy();
        message_vision("$N��չ��һ�½�ǣ�˲�������������!!!\n",me);
         }
         }
        ::heart_beat();
}
 void die()
 {   object ob;
     int i,j;
	 object me=this_object();
    object winner;
    if(!query_temp("last_damage_from")){
      ::die();
      return ;
    }
    else
      winner=query_temp("last_damage_from");
    if(!winner){
      ::die();
      return ;
    }
     winner->set("secret_book",1);
	 
		if(winner->query_temp("ask_moon3")==1)
          {
		   command("say �Դ����뿪���Ҷ������Ѱ�ò���,Ҳ������ң֪�����������");
             command("say ������ҵ������Ұ�����Ž�����"); 
             new("/open/capital/obj/letter")->move(winner);
             message_vision("���ϸ���$Nһ���� .\n",ob);
             winner->set_temp("ask_moon4",1);
		   }
		   else   
           {
            write("����˵:�벻���㾹��߱��\n"); 
           }

          tell_object(users(),HIR"\n\n

   ���������������� ��

    һ���ҽдӻʳ��д���, ���������, ����ÿ���˵���


      �����ϼݱ�������������������������

    ���շ׷��泯�ʳǵķ����ؿ�ͷ, ��Щ��������������

      ̫���е�: �ɶ��"+((winner&&objectp(winner)==1)?winner->query("name"):"����è")+HIR", �������·���,

                ����ͬ��, ���˵ö���֮!!!!!
  \n\n"NOR);
  if( winner != 0 ) {
    log_file("KILL_KING", sprintf("%s(%s) ��� ���� on %s\n"
      ,winner->query("name"),winner->query("id"), ctime(time()) ));
  }

    :: die();
 }