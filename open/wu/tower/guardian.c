//guardian.c for tower ...... made by Pokai 

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("守塔老者",({"tower older","guard","older"}));
	set("gender","男性");
	set("age",65);
	set("fighter","");
	set("str",25);
        set("long","负责看守七杀塔的老人，要是你的程度太差，那他可是会赶你走的。\n");
	set("combat_exp",40000);
	
	setup();
	carry_object("/open/wu/obj/cloth.c")->wear();
}


int accept_fight(object who)
{
return notify_fail("老者笑了笑说，小朋友，我是不会想欺负你的。\n");
}

