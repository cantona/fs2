// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "草坪");
  set ("long", @LONG
这是位着青石小径旁的草坪，草坪上开着许许多多的
花草，看起来十分的舒服，草坪的上面坐着许多的儒门弟
子，他们一面研究兵法，一边观看小径上的来客。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"area_3.c",
  "east" : __DIR__"area2.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/new_scholar2.c" : 2,
]));

  setup();
}
