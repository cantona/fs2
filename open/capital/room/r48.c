// Room: /open/capital/room/r48.c

inherit ROOM;

void create()
{
	set("short","升平桥");
	set("long",@LONG
这有条小溪流过，因此搭了座桥。为了纪念几十年的天下太平，皇
帝把这桥取为升平。这是座白色的拱桥，两边的石栏雕刻得美仑美奂。
桥并不长，但是相当的宽，这是为了配合驰道而设计的。

LONG);



  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r49",
  "south" : __DIR__"r47",
]) );

  set("gopath", "south" );

  setup();
}
