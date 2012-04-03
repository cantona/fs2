// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阅\武场");
  set ("long", @LONG
这里是一片极大的广场 . 由于水军仅建军数年 , 一切尚在
起步阶段 , 士兵们平日最重要的是就是训练武技 . 你看到数千
人打着赤膊 , 顶着烈日 , 面对着大海辛勤的操练着 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/gblade/navy/room/d1-3.c",
	"east" : "/open/gblade/navy/room/d1-5.c",
	"north" : "/open/gblade/navy/room/d1-6.c",
]));
	set("objects",([
	"/open/gblade/navy/npc/soldier":2,
	]));

  setup();
}
