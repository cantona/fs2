// bandit.c

inherit NPC;

void create()
{
	set_name("龙秀祈",({"dragon"}));
	set("gender","女性");
	set("age",17);
	set("long",
		"她是寒谷一派弟子中，武功最差，但法术奇高的绝世美女，名曰「龙秀祈”。\n");
	set("combat_exp",10000);
	set("score", 60);
	set("attitude","heroism");
	set("unarmed",20);
	set_skill("parry",40);
	set_skill("force",30);
	set_skill("magic",70);
	set_skill("dodge",40);
	setup();
	add_money("silver", 3);
	create_family("玄冰寒谷",5,"弟子");
}
