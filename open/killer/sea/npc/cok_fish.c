#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("海扇",({"cockle"}));
set("long","贝类的一种，但是在海中仍然是具有伤害力的\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",600);
set("max_force",600);
set("max_kee",1300);
set("kee",1300);
set("combat_exp", 10000);
set_skill("dodge",50);
setup();
}