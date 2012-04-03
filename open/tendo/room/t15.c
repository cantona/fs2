// Room: /open/tendo/room/t06.c

inherit ROOM;

void create()
{
	set("short", "修行房");
	set("long", @LONG
广阔的地板铺盖着厚厚的草席，上面摆放着数个
蒲团，四周空荡荡的，没有任何杂物。正有几名天道
弟子坐在这儿修行。

LONG
	);
	set("objects",([
	"/open/tendo/npc/boy2" : 2,
	]));
	set("exits", ([ /* sizeof() == 2 */
	"east" : __DIR__"t12",
]));
	set("light_up",1);
	setup();
}
