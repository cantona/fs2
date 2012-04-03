#include <ansi.h>

inherit NPC;

void create()
{
      set("title","溜狗男孩");
      set_name("大宝",({"dabau"}));
      set("long",@LONG
三姑---胖妇人的宝贝儿子，瞧今个儿天气不错，这男孩便带他的爱犬---大呆出来
一同溜躂溜躂、活动一下筋骨。
LONG
      );
      set("age",10);
      set("gender","男性");
      set("attitude","friendly");

      set_skill("parry",10);
      set_skill("dodge",10);
      set_skill("unarmed",5);
      set("combat_bat",1000);

      set("chat_chance_combat",2);
      set("chat_msg_combat",({
          "大宝大叫：哇！妈妈、妈妈，救命啊，有人要打我啊！\n",
      }) );

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("coin",5);
}

int accept_kill(object me)
{
      object ob,dog;
      ob=this_object();
      dog=present( "dog",environment(ob) );
      if( !present( "dog",environment(ob)) || !living(dog))  return 1;
      else {
          tell_room(environment(me),"大宝呼救道：哇！大呆、大呆快来救我啊！\n"),
          message_vision(HIB"\n原在一旁的大呆护主心切，向$N疾扑了过去。\n"NOR,me);
          dog->kill_ob(me);
          return 1;
      }
      return 1;
}
