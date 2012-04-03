inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "攀岩道");
        set ("long", @LONG
历经了一番的辛劳，你终于登上了长白山上的攀岩道，在这一片
广大的岩道上，无情的山风吹向你，让你快站不住脚，溼冷的空气濔
漫在空气之中，慢慢的，你可以看到三座山峰在不远的前方了，但是
真正要到山峰却还有一段路要走。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "up"      : __DIR__"mon38",
        "down"    : __DIR__"mon36",

]));
        setup();
}
