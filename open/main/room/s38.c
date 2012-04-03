// Room: /open/main/room/s38.c

inherit ROOM;

void create()
{
	set("short","道路");
	set("long",
"这是一条青石板铺成的道路 , 是朝廷近年来所造 , 道路向
南北延伸 , 连接着中央驿站和大陆唯一的港口 -- 枫林港 . 近几
年来由于和其他大陆的通航 , 枫林港早已从原本朴素的小乡村一
跃而成为王朝商业重镇 , 南方就是枫林港的北门 .

");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s31",
  "west" : __DIR__"s37",
  "east" : __DIR__"s39",
	"south" : "/open/port/room/r1-1",
]) );

  set("outdoors", "/open/main" );

  setup();
}
