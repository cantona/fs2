// Room: /open/capital/room/r01.c

inherit ROOM;

void create ()
{
  set ("short", "西城门下");
  set ("long", @LONG
这里是进出城的通道, 由于京城防守严密, 因此常有军队通行，所
以你还是要小心点, 免的惹祸上身。路上的石板也因为军队移动频繁,
而磨的有点老旧。
    东方的大道通往皇宫大门, 也可连至京城里最富裕的区域。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/D01",
  "east" : "/open/capital/room/r02",
]));

  set("gopath", "east");

  setup();
}
