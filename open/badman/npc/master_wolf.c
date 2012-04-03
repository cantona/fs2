#include <ansi.h>
inherit NPC;
void create()
{
  set_name("筤騂",({"wolf master","wolf","master"}));
set("long","这个人看来凶狠残暴 ,但眼中却透露出些许和蔼的眼神。
从他注视身旁那只白狼的眼光来看，他似乎非常喜爱这
匹举世无双的白狼。\n");
  set("nickname","绝霸狼王");
  set("str",40);
  seteuid(getuid());
  set("age",47);
set("bellicosity",1000);
  set("combat_exp",430000);
  set("max_force",1000);
  set("force",1000);
  set("force_factor",10);
  set("max_gin",500);
  set("max_kee",600);
  set("max_sen",250);

  set_skill("badforce",50);
  set_skill("badstrike",75);
  set_skill("ghost-steps",38);
  set_skill("dodge",55);
  set_skill("unarmed",85);
  set_skill("parry",70);
  set_skill("move",30);
  set_skill("force",60);
  map_skill("force","badforce");
  map_skill("unarmed","badstrike");
  map_skill("parry","badstrike");
  map_skill("dodge","ghost-steps");
  map_skill("move","ghost-steps");
  set("functions/evil-blade/level",20);

  set("chat_chance_combat", 35);
  set("chat_msg_combat", ({
  (: perform_action, "unarmed.evil-blade" :),
  }));
  set("inquiry",([
    "杜杀的左手" : "左手...?这我可不晓得 ,但不知道我那匹爱狼前几天从森林中带回来的手是不是 ?啥...?你想要 ?那可不行 ,这只手可是我这匹举世无双的白狼的食物!!想要 ,就自己来抢 !\n",
  ]));

  setup();
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

void greeting(object ob)
{
  if( ob->query("class")=="bandit")
  {
  if( ob->query("marks/ride_wolf",1))
  {
  }
else if( ob->query("quests/badroar",1) && ob->query("combat_exp") > 600000)
   {
    message_vision("[1;32m你不就是那个打败我的小伙子吗？\n
怎样，最近混得不错吧？果真英雄\n
出少年啊！来吧，去跟管狼的许老\n
讲一声，要只狼骑骑吧！[0m\n",ob);
    ob->set("marks/ride_wolf",1);
   }
  }
}
int accept_kill(object me)
{
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf",environment(ob) );
  if( !present( "wolf",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),"居然敢动我!?你死定了 !\n"),
  message_vision(RED"\n白狼看到主人被袭 ,马上向$N扑了过去 !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
int accept_fight(object me)
{
  object ob,wolf;
  ob=this_object();
  wolf=present( "wolf",environment(ob) );
  if( !present( "wolf",environment(ob))||!living(wolf)) return 1;
  else {
  tell_room(environment(me),"居然敢动我!?你死定了 !\n"),
  message_vision(RED"\n白狼看到主人被袭 ,马上向$N扑了过去 !\n"NOR,me
  );
  wolf->kill_ob(me);
  return 1;
  }
}
