// Room: /open/gsword/room/su6.c

inherit ROOM;

void create()
{
	set("short", "青石小径");
	set("long", @LONG
走在青石小径上,这里已不是蜀中闹区,高大的建筑渐渐减少,取代
的是一般平房,人潮,也渐渐的消失了.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"su7",
  "west" : __DIR__"suroom1",
  "east" : __DIR__"su5",
]));

        set("outdoors","/open/gsword");
	setup();
}
