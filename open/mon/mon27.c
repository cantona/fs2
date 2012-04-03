inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "雪中小径");
        set ("long", @LONG
前方的小路依旧，刺骨的寒风迎面而来，细细的白雪轻轻地覆盖
了整条小径，一般的草木已经不复见，只剩极少数耐寒的小草连遮带
掩的躲在石缝中，其生命力之旺盛，由此可见。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"      : __DIR__"mon28",
        "eastdown"    : __DIR__"mon26",

]));
        setup();
}

