// Room: /open/capital/room/r45.c

inherit ROOM;

void create()
{
	 set("short","日升驰道");
	set("long",@LONG
城东的车马大道。为了便于军队快速通行而设。地面铺的石板相当
考究，有许多精巧的花纹，有狮头，有双龙抢珠图。不过年代已久，又
有车马来回碾压的缘故，许多石板都出现裂痕。
   
LONG);
  set("outdoors", "/open/capital" );
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r44",
  "north" : __DIR__"r46",
]) );

  set("gopath", "south" );

  setup();
}
