inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",YEL"双冥祭台"NOR);
set("long",@LONG
这是掌管着【生】【死】双冥王的祭台, 左边司【生】
, 右边管【死】, 传闻当生死两祭台开启时, 即是死灵骨魔
复活之时...
    中央放置一个骨魔的雕像(statue)
LONG);
set("no_light",1);
set("exits",([
"up":__DIR__"g-r01",
"east":__DIR__"g-s02",
"west":__DIR__"g-s03",
]));
set("item_desc",([
"statue":"一个死灵骨魔的雕像, 感觉上似乎有点怪异!!\n",
]));
set("no_transmit",1);
setup();
}
