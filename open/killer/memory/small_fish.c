#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set("title","小鱼");
set_name("时鲤",({"chi-li","chi","li"}));
set("long","为莫塔湖的镇湖之鱼，相传是叶孤成所饲养的鱼。\n");
set("race","人类");
set("gender","雌性");
set("attitude","aggressive");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 30);
set("con", 30);
set("force",300);
set("max_force",300);
set("max_kee",800);
set("kee",800);
set("combat_exp", 80000);
set_skill("move",80);
set_skill("dodge",80);
set_skill("parry",60);
setup();
}
