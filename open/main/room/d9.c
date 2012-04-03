// Room: /open/main/room/d9.c

inherit ROOM;

void create ()
{
  set ("short", "沙漠");
  set ("long", @LONG
这儿是一望无际的撒哈拉沙漠，东北有一栋建筑依势而建，
从这儿看过去, 却看不到入口, 不知它的门是在哪一边?
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/loto" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "southeast" : __DIR__"r2",
  "north" : __DIR__"d2",
  "west" : __DIR__"d8",
  "east" : __DIR__"r1",
]));

  setup();
}
