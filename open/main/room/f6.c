// Room: /open/main/room/f6.c

inherit ROOM;

void create ()
{
  set ("short", "森林");
  set ("long", @LONG
这里一望无际的森林, 东边黑压压的一片密林，看来是人烟稀少的地方
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f4",
  "south" : __DIR__"f7",
  "west" : __DIR__"f5",
]));

  setup();
}
