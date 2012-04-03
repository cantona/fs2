// 独孤老人 by anmy 99/05/05 for 回收魔龙eq
#include <ansi.h>
#include <../start.h>
 
inherit NPC;

void create()
{
	set_name("独孤老人", ({"lonely old man","man" }) );
	set("gender", "男性");
        set("nickname", HIM"龙之剩"NOR);
	set("age", 71);

set("long","你看到一位老人在你眼前,似乎他正在寻找收集有魔龙装备的有缘人\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 10000000);
        set("no_kill",1);
	setup();
}

int accept_fight(object me)
{
	return
notify_fail("独孤老人咳了咳缓缓的说：这位"+RANK_D->query_respect(me)+"别开我玩笑了好吗？\n老身年迈体虚,怎有资格指点您呢..\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="mdragon-eq" ) {

tell_object(who,"原本老人的眼神软弱无力，一瞬间眼神一亮\n他豪爽的往你一拍：小子！真有你的了！！\n\n");
                if( !who->query("quests/归还魔龙装备") )
                    {		
     who->add("standby", 4);

tell_object(who,HIY"独孤老人狂傲的笑了一阵子.\n"NOR);
tell_object(who,HIR"哈～哈～哈～哈～哈～哈～哈～哈～\n"NOR);
tell_object(who,HIY"一阵力气油然而生, 你似乎多了好几倍的保护了\n\n"NOR);
tell_object(who,HIW"原来独孤老人以秘法使你身上的替身狂增四个\n"NOR);

			who->set("quests/归还魔龙装备", 1);
		}
}
}
