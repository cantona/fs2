// bandit.c

inherit NPC;

void create()
{
	set_name("小清",({"chin"}));
	set("gender","女性");
	set("age",16);
	set("long",
		"她是寒谷一派第五代弟子小清，负责看守神宫大门。\n");
	set("combat_exp",7000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("force",30);
	set_skill("magic",40);
	set_skill("dodge",60);
	setup();
	add_money("silver", 3);
	create_family("玄冰寒谷",5,"弟子");
}
