#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"走道"NOR);
set("long",@LONG
在西边有一间房间，门槛上面写着一些你看不懂的字，由此可推得，这艘船的
所有者一定不是中原人士，但这种歪七扭八的字型，你似乎又曾经在哪里看过，一
时之间，你也回想不出来。
LONG);
set("exits",([
"north":__DIR__"b_r01",
"south":__DIR__"b_r03",
"west":__DIR__"room01",
]));
setup();
}