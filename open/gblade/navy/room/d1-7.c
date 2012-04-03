// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阅\武场");
  set ("long", @LONG
这里是一片极大的广场 . 你看到数千人打着赤膊 , 顶着烈
日 , 面对着大海辛勤的操练着 . 动作整齐一致 , 喝声响彻云
霄 . 东边和北边皆为军营 , 除了几个轮值人员留守外 , 大部
份的士兵都在阅武场接受训练 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/gblade/navy/room/d1-5",
	"west" : "/open/gblade/navy/room/d1-6",
]));
	set("objects",([
	"/open/gblade/navy/npc/monitor":1,
	"/open/gblade/navy/npc/soldier":1,
	]));

  setup();
}
