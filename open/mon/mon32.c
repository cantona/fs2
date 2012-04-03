inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "赏云坡");
        set ("long", @LONG
山风轻拂，浩翰的云海就在眼前，心中一阵说不出的舒爽，你有
如站在云端，傲视万物，视野所见都是美，是一处极佳的赏云地点，
令人留连忘返。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"mon28",
]));
        setup();
}

