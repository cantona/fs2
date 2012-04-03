// handson by anmy 97/12/26 for new year's quest
#include <ansi.h>
#include <../start.h>
 
inherit NPC;

void create()
{
	set_name("杜三少", ({"handson du","du" }) );
	set("gender", "男性");
        set("nickname", HIC"京城第一帅"NOR);
	set("age", 20);
	set("long","你看到一位帅哥正在你的眼前,但是他似乎正在烦恼该送什么给女友。\n");
        set("per", 40);
	set("str", 25);
	set("con", 20);
	set("combat_exp", 500000);

	setup();
}

int accept_fight(object me)
{
	return
notify_fail("杜三少说：这位"+RANK_D->query_respect(me)+"别开我玩笑了好吗？\n");
}

int accept_object(object who , object item)
{
	if( item->query("id")=="flower" ) {

tell_object(who,"杜三少痛哭流涕的说：谢谢你了！帮我买来要送女友的花~\n");
                if( !who->query("quests/happy") &&
                           who->query_temp("flower")==1 )
                    {		
     who->add("potential", 20000);

tell_object(who,HIY"杜三少潇撒的走到你的面前, 在你的面前亲吻了一下\n"NOR);
tell_object(who,HIR"你只觉得脸好像红通通的, 一种甜蜜的感觉油然而生\n"NOR);
tell_object(who,HIY"杜三少轻声的在你耳边说着: 这是一点小谢礼,有缘再见啰\n"NOR);
tell_object(who,HIW"你忽然觉得全身的气力上升了许多..\n"NOR);

			who->set("quests/happy", 1);
		}
}
}
