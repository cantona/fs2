// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","宝珍神宫西侧侧厅");
	set("long", @LONG
相对于东侧侧厅，这里是西侧的侧厅，同样的，这里也是空空荡荡
的，只不过在墙上有着一幅对联：

        「不知江东情怀，怎知寒谷情深 ?”

	「不懂青影迷思，难懂宝珍缘奇。”

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":COLD_ROOM"in1",
]));
	set("objects",([
	]));
	setup();
	replace_program(ROOM);
}
