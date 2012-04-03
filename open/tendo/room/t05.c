// Room: /open/tendo/room/t05.c

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
  "north" : __DIR__"t10",
  "west" : __DIR__"t04",
]));
		set("light_up",1);
	setup();
}
