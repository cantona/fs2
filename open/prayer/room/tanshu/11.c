// Room: /open/prayer/room/tanshu/11.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG

    这里是天枢门的练武场,最基层的门生都聚集在这习武,或许你可
以和他们切搓武艺,往北走就是天枢门的门门口. 

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"13.c",
  "south" : __DIR__"12.c",
  "north" : __DIR__"1.c",
  "east" : __DIR__"14.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
