// Room: /u/p/poloer/dragon/g2-2
inherit ROOM;

void create ()
{
  set ("short", "魔王殿二楼");
  set ("long", @LONG

  　　　～ 一片暗暗的，伸手不见五指 ～　

LONG);

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g2-1",
  "east" : __DIR__"g2-3",
]));

  setup();
}
