// Room: /open/main/room/s28.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s32",
  "north" : __DIR__"f23",
  "west" : __DIR__"s27",
  "east" : __DIR__"f25",
]) );

  set("outdoors", "/open/main" );

  setup();
}
