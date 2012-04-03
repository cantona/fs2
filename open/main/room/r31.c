// Room: /open/main/room/r31.c

inherit ROOM;

void create ()
{
	set("short","道路");
  set ("long", @LONG
这是一条青石板铺成的道路 , 是朝廷近几年新开辟的 , 通往
大陆南方的城市 , 关卡 , 你发现路上商人特别多 , 不知是何缘
故 , 北方就是中央驿站了 , 你可以在那里休息一下 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/center/room/road3",
  "south" : __DIR__"r33",
]));

  set("outdoors", "/open/main");


  setup();
}
