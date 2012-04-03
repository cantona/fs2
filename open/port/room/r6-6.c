// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","城墙上");
  set ("long", @LONG
你正站在枫林港北面的城墙上 . 往西边看去 , 有几个全副
武装的守卫正在巡逻着 . 其实枫林真正的外患来自南方 , 由水
路而来的他国 . 北方方圆百里内皆为本国领土 , 并无敌国 . 
东边为了望台 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"southdown" : "/open/port/room/r6-3",
	"east" : "/open/port/room/r6-7",
]));
	set("objects",([
	]));

  setup();
}
