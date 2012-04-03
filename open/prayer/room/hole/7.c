///open/prayer/room/hole/7.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	浓厚的血腥味扑鼻而来，但你不以为意，在这江湖上行走，早就
	过惯刀口上过活的日子，地上足迹非常明显，巡着足迹不知会通
	往哪里??越往里走，那阴暗的感觉就越来越明显!!地上都是黏稠
	的液体，让人行走的越发困难!!

LONG	);
 
    set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/ditail-snake2" : 1,		//双头响尾蛇
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"17",
  "north":__DIR__"5",
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}