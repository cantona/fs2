// Room: /u/p/poloer/dragon/stree-1
inherit ROOM;

void create ()
{
  set ("short", "树林");
  set ("long", @LONG
一片广大的树林，树木长的都非常的高耸，而它茂密的叶子，把
阳光都遮住了，使得这里看起来都暗昏昏的。树木多的都看不到前方
的路，只能慢慢的前进。

LONG);

  set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/mob1.c" : 1,
  __DIR__"npc/mob2.c" : 1,
  __DIR__"npc/mob3.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"stree",
  "east" : __DIR__"stree-2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
