// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","石板大道");
  set ("long", @LONG
这是一条极为平坦的石板大道 . 南边为海岸(沿岸) , 道路
隔着提防 , 顺着海岸成东西走向 . 这条道路是近几年新辟的 ,
用硬度极佳的花冈石所铺成 , 以作为军事用途 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r5-1",
	"east" : "/open/gblade/navy/room/d1-2.c",
]));
	set("objects",([
	]));

  setup();
}
