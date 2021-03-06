// Room: /open/main/room/r21.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "西边是凌云村, 因为京城早就迁往东边去了, 因此这附近人口
越来越少, 村长为了这问题正大伤恼筋哩, 不过, 就算想帮也无从
帮起. 何况, 你也想早日离开凌云村去闯荡一番的. 往东直走就是
驿站, 南边有座笔架山.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/start/room/s14",
  "north" : __DIR__"m8",
  "south" : __DIR__"m14",
  "east" : __DIR__"r22",
]) );

  set("outdoors", "/open/main" );

  setup();
}
