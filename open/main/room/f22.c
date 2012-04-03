// Room: /open/main/room/f22.c

inherit ROOM;

void create ()
{
	set("short","道路");
  set ("long", @LONG
这条路贯穿了森林 , 两旁是高大的树木 , 晚上一个人行
走在此 , 乱可怕的 , 不过还好 , 由于道路衔接着南方大港
枫林港 , 这里不管是白天或夜晚 , 总是熙熙攘攘的 , 与两
旁寂静的森林 , 相映成趣 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/squirt" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"r35",
  "south" : __DIR__"s27",
  "west" : __DIR__"f21",
  "east" : __DIR__"f23",
]));

  setup();
}
