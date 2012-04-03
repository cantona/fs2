// Room: /u/s/sueplan/newplan/area/get2.c
inherit ROOM;

void create ()
{
  set ("short", "小路旁");
  set ("long", @LONG

天空泛着白云, 看起来天气是非常的和煦, 路上可以听到鸟儿
高声歌唱, 让你的心情无比的愉快。不过你看到一个白发老人在你
面前叹着气, 不知道他是怎么了?
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"groom2.c",
  "west" : __DIR__"groom4.c",
]));

  setup();
}
