// Room: /open/main/room/s32.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s39",
  "west" : __DIR__"s31",
  "north" : __DIR__"s28",
  "east" : __DIR__"f26",
]) );

  set("outdoors", "/open/main" );

  setup();
}
