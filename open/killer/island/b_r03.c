#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"走道"NOR);
set("long",@LONG
你走到这里，船身突然摇晃了一下，底板发出的响声也变大了，看来这里没多
久可能就会垮掉了，也许你应该再加紧脚步离开才对。
LONG);
set("exits",([
"north":__DIR__"b_r02",
"south":__DIR__"b_r04",
]));
setup();
}