// Room: /open/gblade/port/room/p1.c
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
这是一条青石板铺成的道路 , 是朝廷近年来所造 , 道路向
南北延伸 , 连接着中央驿站和大陆唯一的港口 -- 枫林港 . 近几
年来由于和其他大陆的通航 , 枫林港早已从原本朴素的小乡村一
跃而成为王朝商业重镇 , 南方就是枫林港的北门 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/main/room/s38.c",
  "south" : __DIR__"p1-1",
]));

  setup();
}
