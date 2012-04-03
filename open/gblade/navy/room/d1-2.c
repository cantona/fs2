// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","石板大道");
  set ("long", @LONG
你正走在一条又宽又平坦的石板大道上 . 道路通往本国唯一
的水军基地 . 这一带是军事重地 , 普通的民众是不能随意通行
的 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-1.c",
	"east" : "/open/gblade/navy/room/d1-3.c",
]));
	set("objects",([
	]));

  setup();
}
