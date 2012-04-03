inherit ROOM;

void create ()
{
set ("short", "杀手休息室");
set ("long", @LONG
这里是杀手们在接受一连串特训之后，休息的好地方。有专人为你服务。
只不过，这可是中国四千年的秘密神功。可以快速回复体力。
但是，一般人如果体质不好，可是无法在短时间内，接受太多次回复。
想回复的就问气功师，有关回复的事吧。。。。

LONG );

set("exits", ([ /* sizeof() == 2 */
     "east" : __DIR__"waterm.c",
]));

set("objects", ([ /* sizeof() == 1 */
"/open/killer/npc/rester.c" : 1,
]));

set("light_up", 1);
setup();
}