// Room: /open/soulin/room/r2.c

inherit ROOM;

void create ()
{
	set("short", "林间小径");
	set("long", "	再过去有个亭子不知是做什么的，过了亭子
	有间大寺庙应该就是少林寺了。


");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r5",
  "north" : __DIR__"r8",
]) );

  set("outdoors", "/open/soulin" );


  setup();
}
