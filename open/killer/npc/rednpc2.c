#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("红叶组上级杀手",({"red killer","killer","red"}) );
  set("long","他是红叶组专门派出去执行任务的杀手，一身功夫自不在话下。 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",350000);
  set("age",24);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",30);
  set("cps",30);
  set("str",50);
  set("kee",1500);
  set("max_kee",1500);
  set("force",1000);
  set("max_force",1000);
  set("force_factor",8);
  set("chat_chance",10);
  set("bellicosity",300);
  set_skill("rain-throwing",73);
  set_skill("throwing",72);
  set_skill("blackforce",60);
  set_skill("force",60);
  set_skill("dodge",75);
  set_skill("shade-steps",60);
  set_skill("parry",75);
  set_skill("move",75);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
 setup();
    add_money("gold",5);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(80);
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_cloth2.c")->wear();
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
    tell_room(environment(me),"一起上！有人找碴!给我拿下 \n"),
    message_vision(HIB"\n红叶组上级杀手看到好友有难，马上向$N攻过来！\n"NOR,me);
     guard->fight_ob(me);
    return 1;
   }
}
