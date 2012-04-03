// Room: /u/p/poloer/dragon/bc3
inherit ROOM;

void create ()
{
  set ("short", "碎石小路");
  set ("long", @LONG
这是一条不太平整的小路，它是由一些小碎石所铺设的小路，并
没有什么特别之处。不过走到这里感到非常的恐怖，还是赶快离开吧
。

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob5.c" : 1,
  __DIR__"npc/mob4.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"c1",
  "west" : __DIR__"bc2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
