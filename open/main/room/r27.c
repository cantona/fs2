// Room: /open/main/room/r27.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "	出了中央驿站，往东是一条笔直的道路，北方是
	座台地，但这儿没有路可以上去，南方是横亘大
	陆中央的天山山脉，壮观的景色令人叹为观止。


");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/center/room/road4",
  "east" : __DIR__"r28",
]) );
  set("outdoors", "/open/main" );

  setup();
}
