// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","石板大道");
  set ("long", @LONG
你正走在一条又宽又平坦的石板大道上 . 自从枫林建港之后
倭寇便不断来袭 , 朝廷有鉴于仅凭守卫队兵力并不足于确保港口
安全 , 所以在此建立水军 , 以抵御外敌 . 北边即为水军总督府
 , 东边是个阅武场 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-2.c",
	"east" : "/open/gblade/navy/room/d1-4.c",
]));
	set("objects",([
	]));

  setup();
}
