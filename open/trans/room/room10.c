#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","枫林港驿站");
    set("long",@LONG
这里是枫林港驿站, 因为这里是以渔产为主, 所以你经常可以看到
渔夫们把刚捕上来的鱼一袋袋的运来, 拜托驿站老板帮他们把渔产运往
各地销售.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/port/room/r1-3",
]));

    setup();
}
