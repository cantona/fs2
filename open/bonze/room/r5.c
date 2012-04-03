// Room: /open/soulin/room/r5.c

inherit ROOM;

void create ()
{
	set("short", "林间小径");
	set("long",@LONG
	少林寺乃是个佛门清修之地，一进山门便是一条
	小径，两旁种植了许多不知名的树木，高耸参天
	，间而鸟语，更显示出此地的清静。


LONG );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r2",
  "out" : "/open/main/room/M15",
]) );

  set("outdoors", "/open/soulin" );


  setup();
}
