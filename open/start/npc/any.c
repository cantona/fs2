// any.c by anmy 97/11/17

#include <ansi.h>
#include <../start.h>

inherit NPC;

void create()
{
	set_name("幽岚", ({"beauty any","any","beauty" }) );
	set("gender", "女性");
        set("nickname", HIC"馨岚公主"NOR);
	set("age", 20);
	set("long","你看到一个清秀的女孩出现在你面前,她长得绝顶美丽,\n还带着一种不同于其他人的气质,她似乎失落了一些东西。\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 10000);

	set("chat_chance", 5);
	set("chat_msg", ({
		"幽岚不断地对着你微笑着。\n",
                "幽岚左顾右盼，似乎在找寻着什么东西..。\n",
	}) );

	setup();
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object me)
{
	return
notify_fail("幽岚公主说：这位"+RANK_D->query_respect(me)+"别开我玩笑了好吗？\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="stone" ) {

tell_object(who,"幽岚公主开心的笑着：辛苦你了！谢谢你帮我找回宝石,谢谢~\n");
		if( !who->query("quests/stone") &&
                           who->query_temp("stone")==1 )
		{
			who->add("combat_exp",1000);
                tell_object(who,HIY"你完成了失落的宝石之谜！\n"NOR);
			tell_object(who,HIC"你的经验增加了 :p\n"NOR);
			who->set("quests/stone", 1);
		}
}
}
