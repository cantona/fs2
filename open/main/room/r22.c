// Room: /open/main/room/r22.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
你正走在一条山谷中, 也因此这儿车马相接, 络绎不绝, 最吸
引人的是, 这附近的山区常常有特种药草出现, 因此采药草的武林
人士不远千里而来. 道路在此呈东西走向.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/main/room/r21",
  "north" : "/open/main/room/m9",
  "south" : "/open/main/room/m15",
  "east" : "/open/main/room/r23",
]));

  setup();
}
