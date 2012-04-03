// Room: /u/m/moner/room/room21.c
inherit ROOM;

void create ()
{
  set ("short", "后院");
  set ("long", @LONG

这里是魔刀门内栽花植草的地方，因门人多为习刀嗜武之人，鲜少有
爱花惜草之人，所以院内少有人照料，奇花异草和杂花杂草生长在一起
，不仔细看的话是分辨不出来的，彩蝶翩翩的穿梭在花丛间，蜜蜂辛勤
采着蜜。
         清风微微的吹拂着，一只蝴蝶不小心飞到你身旁了。
LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room20.c",
  "north" : __DIR__"room22.c",
]));

  setup();
}
