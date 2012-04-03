// gguard.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("金库守卫", ({ "guard" }) );
	set("title", "恶人谷第二代小喽喽");
	set("gender", "男性");
	set("age", 25);
	set("attitude", "badman");
	set("long", "你看到一个高头大马的男子，从你一进到这里以后就一直在注意你。\n");
	set("combat_exp", 25000);
	set("str", 30);
	set("max_kee", 600);
	set("force", 300);
	set("max_force", 300);
	set("force_factor", 6);
	set_skill("force", 30);
	set_skill("blade", 45);
	set_skill("parry", 25);
	set_skill("dodge", 25);
	set_skill("move", 25);
	set_temp("apply/attack", 27);
	set_temp("apply/dodge", 17);
	setup();
	carry_object(BAD_OBJ"blade")->wield();
}
