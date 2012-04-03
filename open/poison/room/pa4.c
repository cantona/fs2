// Room: /u/r/ranko/room/pa1.c
inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG
这是一条弯弯曲曲的小路，路上石子不少，踩在脚底怪不舒服
的，不时还得注意地上以免被拌倒了，两旁杂草丛生，似乎欠缺人
来打理。路旁有条小径通往一间小木屋，你不禁感到奇怪究竟是谁
住在此处呢。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v3.c",
]));
  set("outdoors", "/open/poison");

  setup();
}

void init()
{
	add_action("do_enter","enter");
}
int do_enter(string str)
{
	object me=this_player();
		if(!str || str!="hut")
	return notify_fail("你想进入那里呀?\n");

	message_vision("$N穿过小径，走到小木屋门前。\n",me);
	tell_room(me,"你推开了木门走进屋内，赫然发现内里住着一位将军模样的人。\n");
	me->move(__DIR__"v10.c");
	return 1;
}
		                   

