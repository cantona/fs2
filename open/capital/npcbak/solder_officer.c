#include <ansi.h>

inherit NPC;
inherit F_SOLDIER;
void create()
{
	set_name("兵部尚书 李大人",({"officer li"}));
	set("gender","男性");
          set("attitude","heroism");
	set("combat_exp",1000000);
          set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("soldier_list",([
	"soldier":"兵士(soldier)",
	"fighter":"武士(fighter)",
	"guard":"守卫(guard)"
	]));
	set("soldier_lv",([
	"soldier":2,
	"fighter":5,
	"guard":8,
	]));
	setup();
}

