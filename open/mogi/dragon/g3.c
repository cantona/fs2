// Room: /u/p/poloer/dragon/g3
inherit ROOM;

void create ()
{
  set ("short", "魔王殿一楼");
  set ("long", @LONG
这里是魔王殿的一楼，里面一片乌黑黑的，伸手不见五指，怪恐怖
的。不时还传来怪物的叫声。

           ～嘿 ～嘿　～

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob7.c" : 2,
  __DIR__"npc/mob8.c" : 2,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g4",
  "east" : __DIR__"g2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
