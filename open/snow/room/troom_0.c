// Room: /u/e/eiei/room/troom_0.c
inherit ROOM;

void create ()
{
  set ("short", "后门出口");
  set ("long", @LONG
    这里是雪苍派的内厅后门，由窗外望去，可以看到
    一片绿油油的树林，而且可能是靠近门口的关系，这里
    的空气比大厅内要好多了。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room17.c",
  "east" : __DIR__"troom_1.c",
]));
  set("outdoors", "/open/snow/room");

  setup();
}
