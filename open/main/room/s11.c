// Room: /open/main/room/s11.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p3",
  "west" : __DIR__"s10",
  "north" : __DIR__"d11",
  "east" : __DIR__"s12",
]) );

  set("outdoors", "/open/main" );

  setup();
}
