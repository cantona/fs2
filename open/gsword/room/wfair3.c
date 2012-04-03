#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "林中空地");
	set("long", "不知为什么在茂密的树林中，这儿竟然寸草不生，使劲的朝地上踏去,发现
这儿的土地坚硬的很，也难怪植物难以在这生根了。
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"wplain12",
  "south" : __DIR__"wriver5",
  "east" : __DIR__"wfair2",
]) );

  set("outdoors", "/open/gsword/room" );


  setup();
}
