#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","西域驿站");
    set("long",@LONG
这里是西域的驿站, 这里地处偏辟, 人民的穿着与中土大不相同, 令你
大开眼界
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/prayer/room/westarea/road9",
]));

    setup();
}
