#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("黄龙组三级杀手",({"killer trainer","killer","trainer"}) );
  set("long","黄龙组的杀手本身就是负责锻炼杀手，因此手下功夫自然不弱 \n");
  set("race", "人类");
  set("gender","男性");
  set("attitude","aggressive");
  set("combat_exp",50000);
  set("age",20);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",15);
  set("cps",15);
  set("str",20);
  set("kee",1300);
  set("max_kee",1300);
  set("force",200);
  set("max_force",200);
  set("force_factor",5);
  set("chat_chance",10);
  set("bellicosity",300);
/*  set_skill("rain-throwing",70);
  set_skill("throwing",75);
  set_skill("blackforce",50);
  set_skill("force",50);  */
  set_skill("dodge",20);
  set_skill("parry",20);
/*  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); */
 setup();
    add_money("gold",2);
/*    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(60);  
    ob->wield();
    ob=carry_object("/open/killer/weapon/k_cloth2.c")->wear();
    ob=carry_object("/open/killer/weapon/k_hand1.c")->wear();
    ob=carry_object("/open/killer/weapon/k_belt1.c")->wear();  */
    ob=carry_object("/open/killer/obj/key_d.c");    
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
void greeting(object ob)
{
  if( ob->query_temp("key")== 1)    
  {
    command("say 居然被你找到这里来！！看招 ");  
  }
  else  
  {
    command("hmm"); 
  }
}
