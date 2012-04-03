// Room: /u/d/dhk/questsfan/rm8
inherit ROOM;

void create ()
{
  set ("short", "六分栈道");
  set ("long", @LONG
好不容易爬到半山处。这儿是一处有六条分枝林道的分路
口。此地称做六分栈道，栈道中央有一处小水泉、一株长的很
像一座大凉亭的巨榕，而榕树下有数块平滑的大石。一切的一
切就好像一处大自然( 嵩山 )造的休息栈一般，故名为＂栈道″
也。

LONG);

  set("exits", ([ /* sizeof() == 6 */
  "northup" : __DIR__"rm9",
  "southwest" : __DIR__"rm21",
  "westdown" : __DIR__"rm7",
  "northwest" : __DIR__"rm22",
  "northeast" : __DIR__"rm23",
  "southeast" : __DIR__"rm24",
]));
  set("outdoors", "/u/d");

  setup();
}
