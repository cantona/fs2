inherit NPC;

void create()
{
	set_name("大蟒蛇", ({"big snake","snake"}));
	set("race", "野兽");
        set("age",20);
set("long", "身长二,三十尺的大蟒蛇,大嘴一张说不定能生吞一只小羊.\n");
	set("str",40);
	set("limbs", ({ "头部", "身体", "尾巴"}));
	set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("kee",400);
	set("con",50);
	set("combat_exp",480);
	set("max_kee",400);
	setup();
}

