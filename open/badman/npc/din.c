// din.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("欧阳丁", ({ "oyawn din", "oyawn", "din" }) );
	set("nickname", "拼命占便宜");
	set("gender", "男性");
	set("age", 41);
	set("long", "这个人瘦骨嶙峋，双颧凸出，一付富商大贾的打扮，是欧阳当的峦生兄弟。\n");

	set("str", 24);
	set("cor", 24);
	set("int", 29);
	set("spi", 25);
	set("cps", 22);
	set("con", 25);
	set("per", 27);
	set("combat_exp",112);

	// set("chat_chance", 5);
	// set("chat_msg", ({
	// 	"农夫抬起头来擦擦额头上的汗水，又再弯下腰去努力的耕田。\n",
	// }) );
	// set("chat_chance_combat", 50);
	// set("chat_msg_combat", ({
	// 	"农夫尖叫道：救命啊！有人杀人啊！\n",
	// 	"农夫尖叫道：你要干什么？要钱也不用杀我吧！\n",
	// }) );

	setup();
	// carry_object(S_OBJ"t_shirt")->wear();
}

// int accept_fight(object me)
// {
// 	return notify_fail("农夫笑着对你说：这位"+RANK_D->query_respect(me)+"别开玩笑了好吗?\n");
// }
