//written by wataru...../open/killer/mon/room/g3.c
inherit ROOM;

void create()
{
        set("short", "绿云组内部");
        set("long", @LONG

	前方是一条由许多枝叶所构成的天然通道，

	要不是你仔细看，你还无法发现这一条通道的存在。

	令你不禁赞叹，此处真的有如鬼斧神工一般.......
	
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"g2.c",
       "south" : __DIR__"g4.c",
   ]));
        setup();
}
