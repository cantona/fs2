#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
   object ob;
   set_name("陈星辉",({"star chen","star","chen"}) );
   set("long","此人相貌堂堂, 与人相当斯文的感觉, 事实上是个面善心恶, 狼心狗肺的东西。\n");
   set("race", "人类");
   set("gender","男性");
   set("combat_exp", 800000);
   set("age",60);
   set("title","金枪银剑");
   set("kee",3000);
   set("max_kee",3000);
   set("force",3000);
   set("max_force",3000);
   set("force_factor",12);
   set_skill("shasword",80);
   set_skill("sword",90);
   set_skill("shaforce",75);
   set_skill("force",80);
   set_skill("sha-steps",90);
   set_skill("dodge",90);
   set_skill("parry",90);

   map_skill("dodge","sha-steps");
   map_skill("force","shaforce");
   map_skill("sword","shasword");

   set("chat_chance_combat",50);
   set("chat_msg_combat",({
       (:perform_action,"sha_kee" :),
       (:perform_action,"swordkee" :)
   }));

   setup();
   add_money("gold",5);
   carry_object("/open/gsword/obj/woodsword")->wield();
}

void init()
{
   object ob;
   ::init();
   if( interactive(ob = this_player())&& !is_fighting() )
   {
      remove_call_out("greeting");
      call_out("greeting",1 , ob);
   }
}

int accept_kill( object me)
{
   int i;
   object guard;

   if( !present("killer", environment(me)) )
   {
      this_object()->command("say 救命ㄚ, 救命ㄚ...快来人救我..........");
      tell_room(environment(me),HIW"\n好大的胆子, 连黑风组的客人也敢动!!\n\n"NOR);
      for(i=0;i<2;i++)
      {
         guard = new("/open/killer/mon/ghost/npc/black5");
         guard->move(environment(me));
         guard->command("follow "+me->query("id"));
         guard->kill_ob(me);
      }
   }
   tell_room(environment(me),"黑风兄弟们, 把刺客拿下来。\n"),
   message_vision(HIB"\n黑风组三级杀手一收到命令，马上向$N攻过来！\n"NOR,me);
   return 1;
}
void greeting(object me)
{
   command("say 你...你...你要做什么...");
}

void die()
{
   object head, killer;
 
   killer= query_temp("last_damage_from");
   if( killer->query_temp("ghost") == 2)        // 防止 fanset 后又来砍
   {
      command("say 我...我...我不甘心ㄚ!!");
      message_vision("说完之后他就倒下了......\n", killer);
      head=new("/open/killer/mon/ghost/obj/shead.c");
      head->move( environment( killer));
      killer->set_temp("ghost", 3);
   }
   else
   {
      command("say 我跟你无怨无仇, 为何你要置我于死地...");
      message_vision("说完之后他就倒下了......\n", killer);
   }
   ::die();
}
