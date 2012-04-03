// Room: /open/badman/room/r14

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "警备厅办公室");
  set ("long", @LONG
这里就是恶人谷人员的调度中心，所有强盗们的行动都由此发
号司令，杜老大的命令也是经由这里传达给所有的喽喽们知道。你
看到房间里摆了各式各样的令旗，还有信号弹等通讯工具。房间的
另一边放了一些笼子，里面似乎养着几只信鸽的样子。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r7",
]));
  set("objects", ([
  BAD_NPC"in" : 1,
]));

  set("light_up", 1);

  setup();
}
