#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("练习生", ({ "trainee" }) );
	set("title", "黑牙联");
	set("gender", "男性");
	set("long", "这是杀手的练习生。\n");
	set("age",12);
	set("attitude", "heroism");
	set("kee",450);
	set("max_kee",450);
	set("combat_exp",4000);
	setup();
}