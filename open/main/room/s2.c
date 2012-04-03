// Room: /open/main/room/s2.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是一望无际的大草原，地上有不少野兽的足迹
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/blackhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"s5",
  "west" : __DIR__"s1",
  "east" : __DIR__"s3",
]));

  setup();
}
