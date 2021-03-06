// Room: /open/main/room/r23.c

inherit ROOM;

void create ()
{
  set ("short", "三叉路口");
  set ("long", @LONG
你正走在一条山谷中, 也因此这儿车马相接, 络绎不绝, 最吸
引人的是, 这附近的山区常常有特种药草出现, 因此采药草的武林
人士不远千里而来. 道路在此通往东方西方及南方.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bee" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"r22",
  "south" : __DIR__"r30",
  "north" : __DIR__"M10",
  "east" : __DIR__"r24",
]));

  setup();
}
