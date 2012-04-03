#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("紫霞组一级杀手",({"mag killer","killer","mag"}) );
  set("long","他在此担任守护紫霞组的工作，自然手下功夫不弱 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",300000);
  set("age",40);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",35);
  set("cps",35);
  set("str",30);
  set("kee",2000);
  set("max_kee",2000);
  set("force",1200);
  set("max_force",1200);
  set("force_factor",4);
  set("bellicosity",500);
  set_skill("rain-throwing",60);
  set_skill("throwing",65);
  set_skill("blackforce",55);
  set_skill("force",55);
  set_skill("dodge",65);
  set_skill("parry",60);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
 setup();
    add_money("gold",4);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(200);
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_belt1.c")->wear();
    ob=carry_object("/open/killer/weapon/k_boot1.c")->wear();

}
void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1 , ob);   }
}
int accept_kill(object ob)
{
message_vision( this_object()->name()+"说:先接最利害的五招吧！\n",ob);
  add("bellicosity",1000);
  command("cmd bellup");
   return 1;

}
int accept_fight(object me)
{
    object ob,guard;
    ob=this_object();

    guard=present( "guard 2",environment(ob) );
     if( !present( "guard 2",environment(ob))||!living(guard)) return 1;
    else {
    tell_room(environment(me),"一起上！有人找碴!给我拿下 \n"),
    message_vision(HIB"\n紫霞组一级杀手看到好友有难，马上向$N攻过来！\n"NOR,me
);
     guard->fight_ob(me);
    return 1;
   }
}
void greeting(object ob)
{
  if( ob->query("class")=="killer")    
  {
    command("smile "+ob->query("id"));  
  }
  else  
  {
    command("say 擅闯紫霞组！到底有什么事？ \t");
    command("hmm"); 
  }
}
