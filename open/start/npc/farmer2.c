// any.c by anmy 97/11/17

#include <ansi.h>
#include <../start.h>

inherit NPC;

void create()
{
	set_name("农夫", ({"farmer" }) );
	set("gender", "男性");
	set("age", 35);
	set("long","你注意到他的鼻子上长了一颗好大的痣，十分的滑稽。\n");
	set("str", 25);
	set("con", 20);
	set("combat_exp", 134);

        set("chat_chance", 5);
        set("chat_msg", ({
         "农夫抬起头来擦擦额头上的汗水，又再弯下腰去努力的耕田。\n",
	}) );
        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
                "农夫尖叫道：救命啊！有人杀人啊！\n",
                "农夫尖叫道：你要干什么？要钱也不用杀我吧！\n",
        }) );

        setup();
        carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("农夫说：这位"+RANK_D->query_respect(me)+"别开我玩笑了好吗？\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="bento" ) {
		tell_object(who,"辛苦你了！谢谢你帮我拿来便当,谢谢~\n");
		if( !who->query("quests/bento") &&
who->query_temp("bento")==1 )
		{
			who->add("combat_exp",100);
tell_object(who,HIY"你完成了农妇的便当之谜！\n"NOR);
			tell_object(who,HIC"你的经验增加了 :p\n"NOR);
			who->set("quests/bento", 1);
		}
	}
	if( item->query("id")=="bento box" ) {
		printf("%s看了一看%s，\n",this_object()->short(),item->short());
		printf("%s大喊：好小子！竟敢吃了我的便当！\n",
		this_object()->short());
		tell_object(who, "你觉得实在很不好意思，只好再回去帮农夫拿一个便当。\n");
		who->set_temp("bento", 2);
	}
	return 1;
}
