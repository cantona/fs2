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
  set("combat_exp",200000);
  set("age",20);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",15);
  set("cps",15);
  set("str",20);
  set("kee",1500);
  set("max_kee",1500);
  set("force",200);
  set("max_force",200);
//  set("force_factor",5);
  set("bellicosity",100);
  set_skill("rain-throwing",30);
  set_skill("throwing",35);
//  set_skill("blackforce",50);
//  set_skill("force",50);  
  set_skill("dodge",30);
  set_skill("parry",30);
//  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); 
 setup();
    add_money("gold",5);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(10);  
    ob->wield();
}
