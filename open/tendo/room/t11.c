// Room: /open/tendo/room/t09.c

inherit ROOM;

void create()
{
	set("short", "集书房");
	set("long", @LONG
淡淡的书味，混杂着若有似无的幽香。一排排的书架上堆满了大
大小小书籍。除了四书五经之外，大部分都是关于法术和炼药的书册
，其中也不乏流传已久的古书和卷轴。一位少女正辛勤地整理书架上
凌乱的书本。

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" : __DIR__"t10",
]));
        set("objects",([
	"/open/tendo/npc/chii" : 1,
        ]));
	set("light_up",1);
	setup();
}
