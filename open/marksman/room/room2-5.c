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

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"room2-4",
//  "south" : "/open/scholar/room/newplan/area/f1.c",
  "east" : __DIR__"room1-1",
]));
  set("outdoors", "/open/marksman");

  setup();
}
