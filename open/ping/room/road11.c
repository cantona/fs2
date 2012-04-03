// Room: /open/ping/room/road11
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这里是平南城的住宅区,人群也稀少多了,一片淡淡的祥和漫
布在空气里,不知是谁家的小孩传来阵阵的嘻闹声,一只野狗在路
上漫步着,注视着你这异乡的游客.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road12",
  "north" : __DIR__"road9",
]));
  set("outdoors", "/open/ping");

  setup();
  replace_program(ROOM);
}
