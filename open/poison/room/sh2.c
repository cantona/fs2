// Room: /u/r/ranko/room/sh2.c
inherit ROOM;

void create ()
{
  set ("short", "杂货店");
  set ("long", @LONG
一间卖着日常生活必需品的杂货店。里面陈列着各种五金、什
物，村民们常常来此处购买日常所需，由于是村里仅有的一间杂货
店，所以生意虽非十分兴隆，倒也还过的去。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v2-3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer2.c" : 1,
]));
  set("light_up", 1);

  setup();
}
