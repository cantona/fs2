#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("琵\琶鱼",({"angler"}));
set("long","大珠小珠落玉盘，犹抱琵\琶半遮面就是用这种鱼。。\n呵呵。。。不是啦，这是一种海中鱼类\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",20);
set("int",30);
set("per",30);
set("str", 25);
set("con", 30);
set("force",250);
set("max_force",50);
set("max_kee",180);
set("kee",180);
set("combat_exp", 700);
setup();
}
