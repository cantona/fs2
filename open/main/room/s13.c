// Room: /open/main/room/s13.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s12",
  "south" : __DIR__"p5",
  "north" : __DIR__"d13",
  "east" : __DIR__"s14",
]) );

  set("outdoors", "/open/main" );

  setup();
}
