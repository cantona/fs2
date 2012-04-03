// Room: /open/main/room/s3.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是大草原的东边, 往东过去, 是出名的撒哈拉沙漠
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/main/room/s5",
  "west" : "/open/main/room/s2",
  "east" : "/open/main/room/d1",
]));

  set("outdoors", "/open/main");

  setup();
}
