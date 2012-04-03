// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","中央大街");
  set ("long", @LONG
你正走在枫林港的大动脉 - 中央大街上 . 路中间用朱红漆
的杈子围了个区域 , 禁止人们通行 , 如此才能快速的流通货物
 . 这里时常有满载商品的车队经过 , 大概是在港口附近的原因
吧 ! 西边是间香火鼎盛的庙宇 , 东边的大宅就是威震江湖的武
威镖局在枫林的分部 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 4 */
"east" : "/open/gblade/room/store",
	"west" : "/open/port/room/r2-3",
	"south" : "/open/port/room/r5-1",
	"north" : "/open/port/room/r2-1",
]));
	set("objects",([
	]));

  setup();
}
