// lolo.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("小喽喽", ({ "lolo", "lo" }) );
	set("gender", "男性");
	set("age", 18);
	set("attitude", "badman");
	set("long", "一个刚加入恶人谷的年轻小混混，练武的时候嘴里还唸唸有词。\n");
	set("combat_exp", 1200);
	set_skill("blade", 10);
	set_skill("parry", 10);
	set_skill("dodge", 10);
	set_temp("apply/attack", 15);
	set_temp("apply/dodge",10);
	setup();
	carry_object(BAD_OBJ"steel_blade")->wield();
}
