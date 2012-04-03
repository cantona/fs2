// Room: /u/p/pokai/room/wu/tower4-1
inherit ROOM;

void create()
{
  set ("short", "武威七杀塔四楼--");
  set ("long", @LONG
来到这里，你发觉打斗的痕迹比方才少了许多，这里的墙壁也是漆着深蓝色，不
同的是这里的空间比前几层都小了些，不过这一层的挑高比前几层都高，你想可能是
便于让守关的武者施展轻功的因素。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower4-2",
  "down" : __DIR__"tower3-3",
]));
  setup();
}
