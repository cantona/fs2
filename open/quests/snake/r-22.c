inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","蛇寨 置物室");
	set("long",@LONG
在你眼前有一个蛇型的座椅，左右两旁皆被石壁给包围住，看起
来格外的拥挤。
LONG);
	set("item_desc",([
"座椅":"座椅的左手边有着一块蛇型的凹槽，大小约与项炼差不多。\n",
"石壁":"石壁上并无值得注意的地方。\n",
]));
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/hau_snake":1,
__DIR__"npc/snake_soldier":2,
]));
	set("exits",([
"south":__DIR__"r-19",
]));
	setup();
}

void init()
{
add_action("do_put","put");
}

int do_put(string arg)
{
object me,obj;

	me = this_player();

	if( !arg )
		return 0;
	if( arg != "snake gem" && arg!= "gem" )
		return 0;
	if( !present("snake-key-2",me) )
		return notify_fail("你怎么装也无法将项炼塞入座椅的蛇型凹槽内，似乎不合。\n");

	message_vision(HIY"$N将蛇型项炼放入了座椅的左扶手处。

突然$N角下的地板坍塌～$N一个站不稳，滑了下去～\n"NOR,me);
	destruct(present("snake-key-2",me));
	me->move(__DIR__"r-23");
	tell_room(__DIR__"r-23",HIY"铛～的一声，似乎有东西掉落下来～\n"NOR);
	obj=new(__DIR__"npc/obj/snake_gem");
	obj->move(environment(me));
return 1;
}