//written by wataru...../open/killer/mon/room/g4.c
inherit ROOM;

void create()
{
        set("short", "绿云组内部");
        set("long", @LONG

	北方是一条鬼斧神工般的天然通道，

	西方，似乎有一条通道在那，但又看不真切

	西南方看起来还蛮宽敞的，似乎蛮特别的

	不知道，绿云组的组长周八伯是不是在哪里呀....

	看来似乎，值得往那里一探.............
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"g3.c",
       "west" : __DIR__"g6.c",
       "westsouth" : __DIR__"g10.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":1,
       "/open/killer/mon/npc/spy5.c":1,
   ]));

        setup();
}
