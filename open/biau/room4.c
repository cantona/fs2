// Room: /u/o/onion/room/w_room2.c

inherit ROOM;

void create()
{
	set("short", "镳局内堂走廊");
	set("long", @LONG
这里已到了长廊的尽头,再往前便是仆人工作的地方,镳局内的厨房便在前方,不时
还传来阵阵的菜香味,浓郁的味道引的你食指大动,肚子忍不住咕噜咕噜的叫了起来.
    南方则是仆人的卧房.

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room5",
  "west" : __DIR__"room3",
  "east" : __DIR__"cookroom",
]));

	setup();
}
