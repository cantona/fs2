// Room: /open/wu/room/luroom15.c
// 泷山武馆的花园
inherit ROOM;
void create()
{
        set("short", "花园");
        set("long", @LONG
这里是泷山武馆的花园,由于泷山武馆的地理位置位在南方所以四季如
春,花繁景致,草木碧绿,一阵阵和煦的风吹来,一趟森林浴下来让人精神
气爽,的辛苦,消除了在平时练武,四周蝴蝶飞舞,更是谈请说爱的好地方。
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "south" : __DIR__"luroom16",
        "west" : __DIR__"luroom12",
]));
        setup();
}
