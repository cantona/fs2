///open/prayer/room/hole/19.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	由墙壁长满的青苔来看，这里比其它地方来的潮湿，脚下也都是
	烂泥，角落的岩石插着一枝箭直没箭矢，你不禁赞叹射箭之人功
	力如此深厚...

LONG	);
    set("objects", ([ /* sizeof() == 2 */
   "/open/prayer/npc/emery-giant" : 1,		
   "/open/prayer/npc/lion" : 1,		
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"20",
  "west":__DIR__"18",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}