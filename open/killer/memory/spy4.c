#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("紫霞组暗杀人员",({"mag killer","killer","mag"}) );
  set("long","他在此担任守护紫霞组的工作，自然手下功夫不弱 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",50000);
  set("age",30);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",45);
  set("kee",500);
  set("max_kee",500);
  set("force",500);
  set("max_atman",500);
  set("atman",500);
  set("max_force",500);
  set("force_factor",5);
  set("bellicosity",500);
  set_skill("dodge",55);
  set_skill("parry",55);
  set_temp("invis",1);
  set("chat_chance", 40);
    set("chat_msg", ({ (: this_object(), "random_move" :),
 }));
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
  if( ob->query("class")!="killer" )
  {   
    if (ob->query("class"))
    {  command("cmd bak "+ob->query("id"));  }
  }
}
