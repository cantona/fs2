// Room: /u/p/pokai/room/wu/tower5-2
inherit ROOM;

void create ()
{
  set ("short", "武威七杀塔五楼--");
  set ("long", @LONG
你发现这儿的景致忽然一变，强烈的白色映入你眼帘，你注意到这里有一个红木
窗棂的窗子，屋子中央还有一个大大的蒲团，蒲团上安坐着一个老人。你看到通往六
楼的梯子近在咫尺，不禁有一股冲动想赶快上去！你注意到墙角有一堆枯骨。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"tower5-1",
  "climb" : __DIR__"tower6",
]));
  set("light_up", 1);

  setup();
}
