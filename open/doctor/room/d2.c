#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short","道路");
  set ("long", @LONG
你正走在这条道路上，一路走来，只有看到几个樵夫，背着一担担的干
材，步行而过。路边长满了许多珍贵的草药，[1;33m【 银针门 】[0m三个大字越来越
明显，由于求医心切，你的脚步又不知不觉地加快了。

LONG);

  set("light_up", 1);
        set("outdoors", 1);
        set("objects",([
        ]));
  set("exits", ([ /* sizeof() == 2 */
      "south" : __DIR__"d1",
      "north" : __DIR__"d3",
      ]));
  setup();
}


