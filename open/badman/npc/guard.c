// guard.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("守卫喽喽", ({ "guard" }) );
	set("title", "恶人谷第二代小喽喽");
	set("gender", "男性");
	set("age", 25);
	set("attitude", "badman");
	set("long", "你看到一个凶神恶煞的男子，正在小心翼翼的担任警戒的工作。\n");
	setup();
	carry_object(BAD_OBJ"blade")->wield();
}
