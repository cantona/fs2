// Room: /open/capital/room/r44.c

inherit ROOM;

void create ()
{
  set ("short", "日升驰道");
  set ("long", @LONG
城东的车马大道。看见东面高耸坚固的城墙，看见特为军队而设的
大道，不禁感叹一国不可一日无兵。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"h16.c",
  "south" : __DIR__"r43",
  "north" : __DIR__"r45",
]));
  set("gopath", "south");

  setup();
}
