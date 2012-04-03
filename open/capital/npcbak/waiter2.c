// /d/snow/npc/waiter.c
#include </open/capital/capital.h>  

inherit F_VENDOR;

void create()
{
	set_name("店小二", ({ "waiter" }) );
	set("gender", "男性" );
	set("age", 22);
	set("long",
		"这位店小二正笑咪咪地招呼客人，还不时被唤去问东问西。\n");
	set("combat_exp",110);
	set("attitude", "friendly");
	set("rank_info/respect", "小二哥");
	set("vendor_goods", ({
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
		CAP_OBJ"tea",
	}) );
	setup();
}
