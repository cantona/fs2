// Room: /open/wu/room/luroom16.c
// 泷山武馆的花园
inherit ROOM;
void create()
{
        set("short", "小溪边");
        set("long", @LONG
这里是泷山武馆的花园南方的小溪,清彻见底的小溪,让人好想下去玩水
一般,从上面更可以看见水下有许多生物,如鱼、虾..等,听听溪流声,便
可以消除,平日紧张的生活步调。
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "north" : __DIR__"luroom15",
        "west" : __DIR__"luroom14",
]));
        setup();
}
