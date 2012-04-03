// firedancer 修改 2002/07/28
// Room: /open/main/room/L12.c

inherit ROOM;

void create()
{
        set("short", "台地");
        set("long", "这是一块微微高起的台地，稀稀疏疏的长了起几丛杂草，
几块石块杂乱分部，更显得这里的荒凉.
附近有一个石屋，石屋上的烟囱不断冒出阵阵白烟，看来似乎
有人住在里面。

		<< 石屋 >>
\n");
	set("item_desc",([
"石屋":"石屋似乎没上锁，似乎可以直接进去..\n",
]));
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"L11",
"north" : __DIR__"m31",
]) );
	set("outdoors", "/open/main" );
setup();
}

void init()
{
add_action("do_enter","enter");
}

int do_enter(string arg)
{
object me = this_player();

	if( !arg )
		return 0;

	if( arg!="石屋" && arg!="horse" )
		return 0;

	message_vision("$N走入了石屋内。\n",me);
	me->move("/open/firedancer/t01.c");
return 1;
}
