// Room: /open/marksman/room/room2-4
inherit ROOM;

void create ()
{
  set ("short", "石板小道");
  set ("long", @LONG
一条用石板所铺设完成的小道，这里的人迹似乎
    越来越多的现象，往远处一看，好像有个镇
    在远处。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room2-5",
  "east" : __DIR__"room2-3",
]));
  set("outdoors", "/open/marksman");

  setup();
}
