#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("银狼组暗杀人员",({"silver killer","killer","silver"}) );
  set("long","他在此担任守护银狼组的工作，自然手下功夫不弱 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",100000);
  set("age",30);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",35);
  set("kee",500);
  set("max_kee",500);
  set("force",500);
  set("max_atman",500);
  set("atman",500);
  set("max_force",500);
  set("force_factor",5);
  set("bellicosity",350);
  set_skill("blackforce",35);
  set_skill("force",45);
  set_skill("dodge",55);
  set_skill("parry",55);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");  
  set_temp("invis",1);
  setup();
    ob=carry_object("/open/killer/obj/dag1");
    ob->wield();
}
void init()
{
    object ob;
    ::init();
    set_temp("invis",1);
    if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
void greeting(object ob)
{
  if(!ob) return;
  if( ob->query("class") != "killer")
  {  // 检查是否为平民，否则会害死新玩家
   if ( ob->query("class"))    
     command("cmd bak "+ob->query("id")); 
  }
}
