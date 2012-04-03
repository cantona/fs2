// Room: /u/p/poloer/dragon/a11-5
inherit ROOM;

void create ()
{
  set ("short", "洞口内");
  set ("long", @LONG
走近一看，原来这里通往一处森林呀，你不经赞叹，真是别也洞天呀。
前方就是一处丛林。

LONG);

  set("light_up", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"a11-4",
  "enter" : __DIR__"stree",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
