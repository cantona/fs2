// Room: /open/poison/room/snake_hole.c
inherit ROOM;

void create ()
{
  set ("short", "山洞深处");
  set ("long", @LONG
这里是山洞的深处, 处处爬满了不同的毒蛇, 可说是
一个名幅其实的蛇洞。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"snake_hole2",
  "out" : __DIR__"cave3",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/bigsnake.c" : 1,
]));

  setup();
}
