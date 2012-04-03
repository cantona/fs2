// bandit.c

inherit NPC;

void create()
{
	set_name("完颜秀",({"show"}));
	set("gender","女性");
	set("age",17);
	set("long",
		"他是由东北前来此处拜师学艺的异族人，名曰「完颜秀”。\n");
	set("combat_exp",6000);
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
