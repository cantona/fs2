// Room: /open/hall/jail/jail3.c

inherit ROOM;

#include <ansi.h>

void create()
{

        set("short", "死牢前走道");
        set("long", @LONG
此处没有灯光，只能凭着从铁窗外，照射下来的月光辨识东西!!站
在这里可以很清楚的听到，从死牢中传来的咆哮声～好像有许多猛兽被
关在里面似的，嗯!?可这是关人的地方啊!?难道............
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"jail2",
  ]));

        setup();

}

