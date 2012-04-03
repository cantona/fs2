// Room: /open/main/room/s8.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L2",
  "west" : __DIR__"s7",
  "north" : __DIR__"s6",
  "east" : __DIR__"s9",
]) );

  set("outdoors", "/open/main" );

  setup();
}
