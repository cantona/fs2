// Room: /open/wu/room/gen1.c
// 泷山禁地入口
inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // 不是说要加这一行吗?
        set("short",RED "-迷宫入口-" NOR);
        set("long", @LONG
这是传说泷山派地下迷官的入口处，房间的环境阴暗潮溼仔细一看，发
现四周墙上，刻有青龙、白虎、朱崔、玄武等四种古代的神兽。北边的
就应该是传说中的泷山迷宫了吧。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "up" : "/open/wu/room/luroom23",
  "north" : "/open/wu/room/gen2.c",
]));
  set("no_transmit",1);
  set("no_auc",1);
  setup();
}
