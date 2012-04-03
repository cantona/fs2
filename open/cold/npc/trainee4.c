// bandit.c

inherit NPC;

void create()
{
	set_name("琴贞",({"jane"}));
	set("gender","女性");
	set("age",16);
	set("long",
		"她看起来一副深情默默的样子，似乎为俗尘杂务所染，因而不能定下心练功，而被叫来此处静修。\n");
	set("combat_exp",2000);
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
