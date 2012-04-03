#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short","道路");
  set ("long", @LONG
你正走在这条道路上，一路走来，人烟越来越稀少，虫声鸟鸣清脆悦耳，
路边长满了许多珍贵的草药，仔细往北眺望，依稀可以看到[1;33m【银针门】[0m三个大
字 。

LONG);

  set("light_up", 1);
        set("outdoors", 1);
        set("objects",([
        ]));
  set("exits", ([ /* sizeof() == 2 */
      "north" : __DIR__"d2",
      "south" :"/open/port/room/r3-4.c",
      ]));
  setup();
}


