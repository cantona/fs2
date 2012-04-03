
#include <ansi.h>

inherit ROOM;

void create()
{
	set("short", "房舍");
	set("long", @LONG
一股浓厚的药味扑鼻而来，琳琅满目的聊医疗器具看的你眼花
潦乱，眼前的徐大夫本来是皇宫里头，专门给即将入宫当太监的人
割鸡鸡的密医，不井从操旧业。

LONG );

        set("exits", ([ /* sizeof() == 1 */
          "south"  : __DIR__"sexroom",
	]));

  set("objects", ([ /* sizeof() == 1 */
    "/open/capital/npc/shyu2"       :     1,
]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
	set("light_up", 1);

	setup();
}

int valid_leave(object who,string dir)
{
     if( dir == "south" && who->query_temp("sleeping") )
                return notify_fail("你已毫无意识，浑身没有力气。\n");
	return ::valid_leave(who,dir);
}

void init()
{
        add_action("do_change","change");
	add_action("do_look", "look");
	add_action("do_score", "score");
}

int do_change(string arg)
{
	object who;
	who=this_player();

	if( who->query_temp("sleeping") )
	{
  tell_object(who, "你正在手术中ㄋㄟ．．．\n");
		return 1;
	}
    if( !who->query_temp("change") )
	{
  tell_object(who, "徐大夫说道 : 改？还要改就到外面付钱。\n");
		return 1;
	}
  tell_object(who, "徐大夫给你打了根麻药，开始昏睡过去。\n");
        who->delete_temp("change");
	who->set_temp("sleeping", 1);
	call_out("wakeup", 8, who);
	return 1;
}

int wakeup(object who)
{
 tell_object(who, HIC"徐大夫摸摸你的下面，奸笑的点了点头。。\n"NOR);
  if( who->query("gender") == "男性")
{    who->set("gender","女性");
}
 if( who->query("gender") == "女性")
{
 who->set("gender","男性");
}
	who->delete_temp("sleeping");
	return 1;
}

int do_look()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
    tell_object(who, "手术中还想乱瞄，想死喔！！\n");
		return 1;
	}
}

int do_score()
{
	object who = this_player();

	if( who->query_temp("sleeping") )
	{
 tell_object(who, "急啥劲啊？手术完就知道了咩！\n");
		return 1;
	}
}
