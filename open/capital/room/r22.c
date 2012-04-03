// Room: /open/capital/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "丰安桥");
  set ("long", @LONG
白色的大拱桥。桥下的小溪应是流向芙蓉湖的。桥名是当今大宰相
号的，藉此冀求上天赐与国泰民安，百姓丰衣足食。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/capital/room/r21",
  "south" : "/open/capital/room/r23",
]));

  set("gopath", "north");

  setup();
}
