inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "跃地界");
        set ("long", @LONG
登上峰顶，不知你眼前所见是真亦是幻，原是山脚山看不清的事
物，却清楚的映入眼帘，几乎是触碰可及，你静静的呆在原地，却不
敢有任何的动作，只怕一个不小心就跃入地界，捽的粉身碎骨。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "down"    : __DIR__"mon41",
]));
        setup();
}
