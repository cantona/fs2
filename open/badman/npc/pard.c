#include <ansi.h>

inherit NPC;

void create()
{
      set_name("��Ǯ��",({"pard"}));
      set("long",@LONG
һֻ�����Ľ�Ǯ����һ���������Ǯ��Ļ��ƣ�������������ͭ���Ĵ��ۻ�
������������㣬�ټ��Ͻ��������������絶�ı�\צ�������������Щ�뿪��
���֤�ݡ�
LONG
      );

      set("race","Ұ��");
      set("gender","����");
      set("age", 5);
      set("attitude","peaceful");

      set("limbs",({"ͷ��","����","ǰ��","β��","����"}));
      set("verbs",({"bite","claw"}));

      set("max_kee",150);
      set("kee",150);
      set_skill("dodge",55);
      set_temp("apply/armor",40);
      set_temp("apply/attack",70);
      set("combat_exp",6500);

      set("chat_chance",1);
      set("chat_msg",({
          "��Ǯ��\������������һ�����ϡ�\n",
          "��Ǯ��\����������������������˼�Ȧ��\n",
          "��Ǯ��\���˸����Ƿ��¶��һ��ѩ�׼�������ݣ��ų���һ�����亹��\n",
      }));

      setup();
}

void init()
{
      object me=this_player();
      ::init();
      if( me->query_temp("blood")==1 ) {
      message_vision(HIB"\n��Ǯ��\�ŵ�$N���ϵ�Ѫ��ζ��һ����Х��������$N��\n"NOR,me);
      this_object()->kill_ob(me);
      }
}