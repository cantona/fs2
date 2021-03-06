// evilmaster.c by oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;

void create()
{
	seteuid(geteuid());
	set_name("原始天魔", ({ "evil master", "evil", "master" }) );
	set("title", "恶人谷开山祖师");
	set("gender", "男性");
	set("age", 25);
	set("class", "bandit");
	set("attitude", "badman");
	set("combat_exp", 2000000);
	set("long", @LONG
他就是传说中恶人谷的大魔头－原始天魔，藉由天魔金身的帮助，
使得已经上百岁的他看起来仍只有二三十岁的样子。自从百年前与
天帝之战挫败后，便一直待在恶人谷中潜心修炼。直到二十年前十
大恶人入谷之后，与原始天魔展开激战，整整打了三天三夜，原始
天魔以寡击众将十大恶人全数收服，成立了今天的恶人谷，并将恶
化魔功传予十大恶人。
LONG );

	set("str", 40);
	set("cor", 40);
	set("int", 40);
	set("spi", 40);
	set("cps", 15);
	set("con", 40);
	set("per", 30);
	set("max_kee", 5000);
	set("max_force", 5000);
	set("force", 5000);
	set("force_factor", 20);

	set_skill("dodge", 60);
	set_skill("ghost-steps", 80);
	set_skill("force", 100);
	set_skill("badforce", 100);
	set_skill("move", 60);
	set_skill("unarmed", 100);
	set_skill("badstrike",100);
	map_skill("unarmed", "badstrike");
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");

	set("inquiry", ([
	"天魔金身":	"想学天魔金身？我得先测试看看你有没有这个资质！",
	]));

	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
	}) );

	setup();
}
