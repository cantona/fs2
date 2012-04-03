// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阅\武场");
  set ("long", @LONG
这里是一片极大的广场 . 你看到数千人打着赤膊 , 顶着烈
日 , 面对着大海辛勤的操练着 . 动作整齐一致 , 喝声响彻云
霄 . 你不禁暗暗佩服水军总督卓越的治兵能力 , 如此雄兵 , 
何坚不摧 ? 何城不破 ? 东边是一大片的军营 , 南边是海 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-4.c",
	"north" : "/open/gblade/navy/room/d1-7.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":1,
	"/open/gblade/navy/npc/monitor":1,
	]));

  setup();
}
