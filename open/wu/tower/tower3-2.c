// Room: /u/p/pokai/room/wu/tower3-2
inherit ROOM;

void create()
{
  set ("short", "武威七杀塔三楼--");
  set ("long", @LONG
来到了这儿，你发现这里一定经历过相当惨烈的战斗，除了四布的血印以及满墙
的掌印，还有一股股湿秽的霉味；你发觉墙角还有几具残缺的骷骨，你想这一些一定
是牺牲在这里的武者们。
LONG );

  set("light_up", 0);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower3-1",
  "east" : __DIR__"tower3-3",
]));
  setup();
}
