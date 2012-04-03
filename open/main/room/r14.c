// Room: /open/main/room/r14.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "	南方的草原上，隐约的看到有几只不知名的动物在追逐着
	，似乎很愉快的样子，向东方看去有座大城，应该就是新
	京了。


");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"f14",
  "west" : __DIR__"r13",
  "south" : __DIR__"s15",
  "east" : __DIR__"r15",
]) );

  set("outdoors", "/open/main" );


  setup();
}
