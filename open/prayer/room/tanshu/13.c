// Room: /open/prayer/room/tanshu/13.c

inherit ROOM;

void create()
{
	set("short", "偏厅");
	set("long", @LONG

    你耳边听到了门生的叫喝声,"杀～杀～",看他们顶着大太阳辛勤
的练武,看他们眼中充满斗志的眼神,无非想要有朝一日能学会先天干
坤功,好扬名立万.

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"21.c",
  "east" : __DIR__"11.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee2.c" : 1,
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
