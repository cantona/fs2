// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","中央大街");
  set ("long", @LONG
你正走在枫林港最热闹的中央大街上 . 这一带是枫林港的闹
区 . 挤在人群中 , 看着两旁的街景 , 摊贩的叫卖声 , 商人的
交易声 , 此起彼落 , 让你见识到了这里的繁华 . 西边有家大商
店 , 也许你可以进去看看 . 东边是家杂货铺 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r3-1",
	"east" : "/open/port/room/r1-9",
	"west" : "/open/port/room/r1-7",
	"north" : "/open/port/room/r1-3",
]));
	set("objects",([
	]));

  setup();
}
