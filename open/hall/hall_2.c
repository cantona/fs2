// Room: /open/su/room/hall_2.c

inherit ROOM;

void create()
{
        set("short", "总衙前厅");
        set("long", @LONG
站在这里，隐约可以听到威武壮声，似乎是无尘大人正在升堂。经
过这个前厅之后，就可以到达总衙大堂了。
LONG);
        set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hall",
  "north" : __DIR__"hall_3",
]));

        setup();
}
