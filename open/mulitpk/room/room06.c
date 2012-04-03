// Room: /u/o/ookami/pkroom/room06.c
inherit ROOM;

void create ()
{
  set ("short", "会场中央");
  set ("long", @LONG
这里是会场的中央, 举目望去, 只见一片空旷的平地, 这里正能让
众人发挥平日所学, 在武林大会中一较高下, 你平静的心里也生出了紧
张的感觉

LONG);

  set("light_up", 1);
  set("no_auc", 1);
        set("no_transmit", 1);
  set("pkroom", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room02.c",
  "west" : __DIR__"room05",
  "south" : __DIR__"room10",
  "east" : __DIR__"room07.c",
]));

  setup();
}
