// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","阜财巷");
  set ("long", @LONG
这里是阜财巷 , 两旁住的不是高官 , 就是巨富 . 刘廉访 ,
 王太宰 , 郑尚书 , 邓枢密等人都住在这里 . 其中房舍最多 ,
 规模最大的首推史怀恩的史宅 . 东边就是史宅 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r3-4",
	"south" : "/open/port/room/r3-7",
]));
	set("objects",([
	]));

  setup();
}
