// Room: /u/p/poloer/dragon/g2-4
inherit ROOM;

void create ()
{
  set ("short", "魔王殿二楼");
  set ("long", @LONG

  　　　～ 一片暗暗的，伸手不见五指 ～　


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g2-3",
 "north" : __DIR__"g2-5",
]));
  set("evil", 1);
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
