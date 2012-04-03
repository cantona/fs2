// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","华清池");
  set ("long", @LONG
清池是个人工湖 , 池面长百五十尺 , 深二丈 . 池畔有个
广场 , 每到假日 , 常有许多街头卖艺者在此表演 , 非常热闹 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-13",
	"west" : "/open/port/room/r3-11",
	"north" : "/open/port/room/r3-15",
	"south" : "/open/port/room/r3-9",
]));

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
