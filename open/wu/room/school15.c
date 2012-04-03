// Room: /open/wu/room/school15
inherit ROOM;

void create ()
{
  set ("short", "正晴武馆二楼");
  set ("long", @LONG
这是正晴武馆二楼穿堂，四个角落都放置着火把，将房间照得灯火通明，
北，东，南各有一个通道，通往任正晴儿女的房间
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/wu/room/school20",
  "north" : "/open/wu/room/school18",
  "east" : "/open/wu/room/school16",
  "westdown" : "/open/wu/room/school8",
]));

  set("light_up", 1);
  setup();
}
