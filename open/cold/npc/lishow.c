// bandit.c

inherit NPC;

void create()
{
	set_name("利绣心",({"lishow"}));
	set("gender","女性");
	set("nickname","神界仙子");
	set("age",14);
	set("long",
		"他是寒谷西侧神殿的主教，也是掌门的师妹，她现在正在非凡神间里修练法术。\n");
	set("combat_exp",800000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("force",30);
	set_skill("magic",80);
	set_skill("dodge",100);
	setup();
	add_money("silver", 3);
	create_family("玄冰寒谷",3,"主教");
}
