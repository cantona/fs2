#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","超级大鱼");
set_name("千鲤",({"san-li","san","li"}));
set("long","为莫塔湖的镇湖之鱼，相传是叶孤成所饲养的鱼。\n");
set("race","人类");
//set("race","妖魔");
set("gender","雌性");
set("attitude","aggressive");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",99);
set("int",30);
set("per",30);
set("str", 55);
set("con", 30);
set("force",1000);
set("max_force",1000);
set("max_kee",3000);
set("kee",5678);
set("combat_exp", 550000);
set_skill("move",120);
set_skill("dodge",120);
set_skill("parry",80);
setup();
}

void die()
{
   object head,killer;
 
   killer=query_temp("last_damage_from");
   if(killer->query_temp("memory") == 6 )
   {
     head=new("/open/killer/memory/sp_can.c");
     head->move(this_object());
     killer->set_temp("memory",7);
   }
   ::die();
}
