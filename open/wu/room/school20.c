// Room: /open/wu/room/school20
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是正晴武馆二楼穿堂，四个角落都放置着火把，将房间照得灯火通明，
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/wu/room/school21",
  "north" : "/open/wu/room/school15",
]));
  set("light_up", 1);

  setup();
}
