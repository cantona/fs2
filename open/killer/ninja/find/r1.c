// open/killer/ninja/find/r1.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG

     如梦似幻之间，你来到了一个奇怪的空间，环顾四周，似乎非常熟悉？
     这里好像是冥蛊魔教附近的山上，你怎么会来到这里呢？
     前面有一个人慌慌张张的逃出，似乎身受重伤，你定睛一看，他居然是柴荣？!
     但是又出乎你意料之外的年轻？莫非你真的来到了十几年前？
     为了避免犯下严重错误，还是小心的跟踪会比较好一点......

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "跟踪" : "浑沌的过去....必须要自己去探索",
                   ]));
                   
  set("exits", ([ /* sizeof() == 3   */
     "跟踪" : __DIR__"r2.c",   
]));
  setup();
}
