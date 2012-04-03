// one.c by oda

#include </open/badman/badman.h>

inherit NPC;

void create()
{
	set_name("万春流", ({ "one tsun liu", "one", "liu" }) );
	set("gender", "男性");
	set("age", 49);
	set("long", "你看到一个中年男子，身着长袍黄冠，羽衣飘飘，潇然出尘，\n神情看来说不出的和平宁静。\n他本来是个神医，所以在恶人谷中的人都靠他治病。\n");
	set("attitude", "peaceful");

	set("str", 22);
	set("cor", 20);
	set("int", 33);
	set("spi", 30);
	set("cps", 32);
	set("con", 28);
	set("combat_exp", 1300);

	// set("chat_chance", 5);
	set("chat_msg", ({
		"农夫抬起头来擦擦额头上的汗水，又再弯下腰去努力的耕田。\n",
	}) );
	// set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		"农夫尖叫道：救命啊！有人杀人啊！\n",
		"农夫尖叫道：你要干什么？要钱也不用杀我吧！\n",
	}) );

	setup();
	// carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("农夫笑着对你说：这位"+RANK_D->query_respect(me)+"别开玩笑了好吗?\n");
}
