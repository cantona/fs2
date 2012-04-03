#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
  object ob;
  set_name("黄龙组超级杀手",({"killer trainer","killer","trainer"}) );
  set("long","黄龙组的杀手本身就是负责锻炼杀手，因此手下功夫自然不弱 \n");
  set("race", "人类");
  set("gender","男性");
  set("combat_exp",800000);
  set("age",45);
  set("title","黑牙联的成员");
  set("class","killer");
  set("cor",25);
  set("cps",25);
  set("str",25);
  set("kee",4000);
  set("max_kee",4000);
  set("force",300);
  set("max_force",300);
//  set("force_factor",5);
  set("bellicosity",200);
  set_skill("rain-throwing",35);
  set_skill("throwing",35);
  set_skill("blackforce",50);
  set_skill("force",60);  
  set_skill("dodge",70);
  set_skill("parry",60);
  map_skill("force","blackforce");
  map_skill("throwing","rain-throwing"); 
 setup();
    add_money("gold",12);
    ob=carry_object("/open/killer/obj/lustar");
    ob->add_amount(10);  
    ob->wield();
}
