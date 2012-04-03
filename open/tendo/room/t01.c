// Room: /open/tendo/room/t01.c

inherit ROOM;

void create()
{
        set("short", "道观的外围步道");
	set("long", @LONG
你正走在道观的外围步道上，上面铺着坚硬的水磨青
砖，四周种满了翠绿的数木，令人心神舒畅。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"t06",
  "east" : __DIR__"t02",
]));
	set("light_up",1);
	setup();
}
