// Room: /open/hall/jail/jail2.c

inherit ROOM;

#include <ansi.h>

void create()

{

        set("short", "牢房走道");
        set("long", @LONG
走道两旁燃着两只火把，整个牢房的灯光就来自此地..潮湿的地板
..偶而还夹点斑斑的血迹....阵阵的寒意登时涌上你的心头......你感
到一股强烈的不愉快感!!你最好尽快离开这里为上!!
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"jail",
  "north" :__DIR__"jail3",

  ]));

        setup();

}

