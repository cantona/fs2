// Room: /u/p/pokai/room/wu/tower6
inherit ROOM;

void create ()
{
  set ("short", "武威七杀塔六楼--");
  set ("long", @LONG
这里几乎快到顶层。你来到了是武威七杀塔的到数第二层，你感觉这楼比刚刚素
净，房间的角落有一个老人站在那儿，对这窗子外面的景色叹息。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"tower7",
  "down" : __DIR__"tower5-2",
]));
  set("light_up", 1);

  setup();
}
