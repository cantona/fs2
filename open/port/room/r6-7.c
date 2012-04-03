// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","了望台底层");
  set ("long", @LONG
这里是了望台的底层 , 城墙到此也到了尽头 . 了望台是个
圆形的建筑物 , 据说这是由一个外国建筑师所设计的 , 是枫林
最醒目的地标之一 . 阶梯沿着墙壁周围往上爬升 , 刚好绕了个
圆圈 . 上面就是了望台了 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"west" : "/open/port/room/r6-6",
	"up" : "/open/port/room/r6-8",
]));
	set("objects",([
	]));

  setup();
}
