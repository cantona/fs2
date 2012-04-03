// Room: /u/f/fire/room/room1-21.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"长沙道"NOR);
  set ("long", @LONG
映在道路上的树影遥曳摆动着，路边的衿取草和野生的小紫含笑
散发出淡淡的花香，令人感觉非常的清爽。你似乎可以看到长沙城的
民众在这里闲逛着。
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-22",
"south" : __DIR__"room1-14",
]));
set("outdoors","/open");

  setup();
}
