// Room: /u/m/moner/room/room19.c
inherit ROOM;

void create()
{
  set ("short", "水云轩");
  set ("long", @LONG

清葱的翠绿笼罩着此处, 佳木笼葱, 奇花烂烂, 一带清流从花木深处
泻于石缝之中, 清风微拂, 翠竹摇曳, 藤萝掩映中, 你的眼皮渐渐感到
沉重了。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room17.c",
]));
  setup();
}
