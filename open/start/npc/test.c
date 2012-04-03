//woman.c

#include <../start.h>

inherit NPC;

   string give_stone();

void create()
{
	set_name("年轻农妇",({"woman"}));
set("long","一个平凡的农家妇女，但似乎在烦恼着什么\n,你可以问问她有什么须要帮忙的。\n");
	set("gender","女性");
	set("age", 20);
	set("combat_exp",1000);
	set("inquiry",([
	  "trouble":"我好烦喔, 我前几天在农地里挖土时挖到一样珍品\n",
	  "珍品":"我捡到一颗宝石, 你可以帮我还给原主吗?\n",
          "宝石":"看它上面的龙纹刻印, 一定是某位高官的物品~\n",
	  "红宝石":(: give_stone :),
	  "red stone":(: give_stone :),
	]));

	setup();
	carry_object(S_OBJ"apron")->wear();
}

string give_stone()
{
	object who, item;
	who = this_player();

	if( who->query("quests/stone") || who->query_temp("stone")==1 )
		return "你不是已经把红宝石拿走了吗？\n";
	else if( who->query_temp("红宝石")==2 ) {
		item = new(S_OBJ"stone");
		item->move(who);
		message_vision("妇女给$N一颗红宝石。\n", who);
		who->set_temp("stone", 1);
		return"真是的,还好我又在路上捡到了,再帮我还给主人喔！\n";
	}
	else {
		item = new(S_OBJ"stone");
		item->move(who);
		printf("妇女给%s一颗%s。\n",
		who->query("name"),item->short() );
		who->set_temp("stone", 1);
		return "麻烦你将红宝石物归原主了, 主人想必是很着急的。\n";
	}
}
