// Room: /open/main/room/M10.c

inherit ROOM;

void create()
{
	set("light_up",1);
	set("short", "圣龙口");
	set("long", @LONG
	走到这已经是长廊的尽头，眼前有座石碑，上头刻着
	「圣龙口”三个字，火就是从石碑上发出的，实在是
	匪夷所思，附近除了长廊外并没有其他的通道，或许
	这块神秘的石碑(chaitya)会是个秘密入口喔。


LONG
	);
	set("item_desc",([
	"chaitya"	: "用看的，不如摸一摸(touch)吧！\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"M11a",
]));

	setup();
}

void init()
{
	add_action("do_touch","touch");
}

int do_touch(string arg)
{
	object who;
	who = this_player();
	if(!arg || arg != "chaitya" )
	return notify_fail("你要摸什么东西？\n");
	if(who->query("class") != "taoist"
	|| !who->query("class") )
	return notify_fail("冷冰冰的一块石碑，没有啥特别。\n");
	else
	{
	message_vision("当$N碰触到石碑时，一阵光芒将$N带走了！\n",
	who);
	who->move("/open/tendo/room/door");
	return 1;
	}
}

