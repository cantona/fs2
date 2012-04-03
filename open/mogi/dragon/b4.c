// Room: /u/p/poloer/dragon/b4
inherit ROOM;

void create ()
{
  set ("short", "炎龙谷中段");
  set ("long", @LONG
四周一点声音都没有，反而让人觉的很恐怖。杂草茂密的让你看
不到四周的环境，更让人就像处在暗处一样，随时有危险的威胁，不
知随时可能会命丧这里。

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob6.c" : 1,
  __DIR__"npc/mob5.c" : 1,
]));
  set("outdoors", "/u/p/poloer/dragon");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"b5",
  "east" : __DIR__"b6",
  "west" : __DIR__"b1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
