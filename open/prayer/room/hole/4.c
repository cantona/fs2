///open/prayer/room/hole/4.c

inherit ROOM;

void create()
{
	set("short", "洞穴");
	set("long", @LONG

	走到这里,血红色的浓雾越来越浓,腥味扑鼻,整个胃都开始翻搅
	起来!!偶尔还有听到悉索悉索的声音!!难不成是怪物要出现了.
	...... 

LONG	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"3",
	"east":__DIR__"12",
	"west":__DIR__"11",
]));
        set("objects",([ /* sizeof() == 1 */
	"/open/prayer/npc/ditail-snake2" : 1,
]));
        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
	setup();
}