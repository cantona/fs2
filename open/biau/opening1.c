// Room: /open/su/room/biau_beyond.c

inherit ROOM;

void create()
{
	set("short", "镳局校场");
	set("long", @LONG
往北一眼看去,到处都是练武用的器材,还有一群镳师在互相切搓武艺,新进的
见习生正一板一眼的练习武功,喝声震天,看来十分努力,往东去便是外堂,瓢把子
赵鼎天就在那里接见外客.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"armory",
//"south" : "/open/su/room/postoffice",
  "west" : __DIR__"opening0",
  "east" : __DIR__"room0",
]));

	setup();
}
