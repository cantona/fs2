// Room: /open/wu/room/luroom21.c
// 泷山武馆休息室
inherit ROOM;
void create()
{
    set("short", "藏宝库");
    set("long", @LONG
这是泷山派的EQ存放及休息处,放眼望去满地的宝物及药膏,看到
怎么多的东西,你不禁要感谢前辈的努力,才有现在的收获。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
   "north" : __DIR__"luroom18",
]));
        set("light_up", 1);
        setup();
}
