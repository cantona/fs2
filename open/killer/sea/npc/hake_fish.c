#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("鳕鱼",({"hake"}));
set("long","一种可食用的鱼类，据说在杀手有人拿他来做鱼丝，号名鳕鱼香丝\n");
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
set("max_kee",200);
set("kee",200);
set("combat_exp", 800);
setup();
}