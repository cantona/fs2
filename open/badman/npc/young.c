#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  set_name("少年",({"young"}) );
  set("long","他的脸上有道从眼角到嘴角的刀疤，\n满头黑发也没梳好，只打了个结。\n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",12345678);
  set("age",18);
  set("no_kill",1);
  set("kee",987654);
  set("max_kee",987654);
  set("force",77777);
  set("max_force",77777);
  set("force_factor",999);
  set_skill("unarmed",150);
  set_skill("badstrike",150);
  map_skill("unarmed","badstrike");
  
  setup();
}
void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
void greeting(object ob)
{
  if (ob->query("quests/karup",1))
  {
   message_vision("[1;37m嗯？怎么还不离开勒？？[0m\n",ob);
  }
  else {
  message_vision("[1;32m嗯，没事吧？还好我及时赶到，不然你就危险了。
这边可是恶人谷的禁地，以后还是别乱闯的好。[1;36m
这是你要找的东西吗？嘻，给你吧，以后要小心点啊。[1;37m
从这边往上爬可以爬到谷顶，别再逗留了，危险啊！[0m\n",ob);
  new("/data/autoload/badman/ste.c")->move(ob);
  ob->set("quests/karup",1);
  ob->set("marks/fish",1);
  }
}
