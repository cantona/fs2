// Room: /u/p/poloer/dragon/b2
inherit ROOM;

void create ()
{
  set ("short", "炎龙谷中段");
  set ("long", @LONG
四周一点声音都没有，反而让人觉的很恐怖。杂草茂密的让你看
不到四周的环境，更让人就像处在暗处一样，随时有危险的威胁，不
知随时可能会命丧这里。

LONG);

  set("outdoors", "/u/p/poloer/dragon");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"b1",
  "east" : __DIR__"b7",
  "south" : __DIR__"b3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
