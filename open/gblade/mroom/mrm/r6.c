// Room: /u/m/moner/room/room9.c
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG

走进这里, 是一条长廊, 往前通往马房,而往两旁也各有一条走道,长廊上铺着上
好的红毯, 两旁的墙上挂着几盏油灯。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r7.c",
  "south" : __DIR__"r5.c",
  "east" : __DIR__"r8.c",
]));
  set("light_up", 1);

  setup();
}
