#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("杀手侍卫",({"killer guard","killer","guard"}) );
  set("long","他看起来杀气冲天，想必是一位杀人不眨眼的人 。 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",50000);
  set("age",21);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("kee",1080);
  set("max_kee",1080);
  set("force",300);
  set("max_force",300);
  set("force_factor",3);
  set("chat_chance",10);
  set("bellicosity",300);
  set_skill("rain-throwing",15);
  set_skill("throwing",15);
  set_skill("blackforce",30);
  set_skill("force",30);
  set_skill("dodge",20);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
setup();
    add_money("silver",10);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(4);
    ob->wield();
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
  add("bellicosity",700);
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
    tell_room(environment(me),"杀手侍卫大叫:伙伴们，有人找碴!给我拿下 \n"),
    message_vision(HIB"\n杀手侍卫看到同伴有难，马上向$N攻过来！\n"NOR,me
);
     guard->fight_ob(me);
    return 1;
   }
}
void greeting(object ob)
{
   if( ob->query("class")=="killer")    {
    command("smile "+ob->query("id"));  
    }
  else { 
    command("say 来此有何贵干！ \t");
  command("grin "+ob->query("id")); }
}