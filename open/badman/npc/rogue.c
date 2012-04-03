// rogue.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("小流氓", ({ "rogue" }) );
	set("gender", "男性");
	set("age", 15);
	set("attitude", "badman");
	set("long", "一个整天无所事事的小流氓，看起来就不是什么好东西。\n");
	set("combat_exp", 800);
	set_skill("parry", 5);
	set_skill("dodge", 5);
	set("max_kee", 150);

	set("chat_chance", 6);
	set("chat_msg", ({
	(: this_object(), "random_move" :),
	"小流氓拿起手中的小刀在你面前挑衅。\n",
	"小流氓瞪着你说道：看三小？再看恁爸给你死喔！\n",
	"小流氓对着你大吼：闪啦！敢挡老子的路？\n",
	}));

	setup();
	carry_object(BAD_OBJ"knife")->wield();
	add_money("silver", 5);
}
