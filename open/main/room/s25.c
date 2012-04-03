// Room: /open/main/room/s25.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"m23",
  "west" : __DIR__"s24",
  "south" : __DIR__"L15",
  "east" : __DIR__"r34",
]) );

  set("outdoors", "/open/main" );

  setup();
}
