// Room: /open/capital/room/r62.c

inherit ROOM;

void create ()
{
  set ("short", "云洋大街");
  set ("long", @LONG
北边是城内首富干通天的宅地，住在旁边的是当今的丞相，由于两
人与镇远侯不合，所以分开两边住。仔细的往北瞧, 里头似乎是一座相
当优美的花园, 空气中还传来阵阵花香味。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"rich",
  "west" : __DIR__"r60",
  "east" : __DIR__"r63",
]));
  set("outdoors", "/open/capital");

  setup();
}
