// Room: /open/main/room/s37.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s30",
  "west" : __DIR__"s36",
  "east" : __DIR__"s38",
]) );

  set("outdoors", "/open/main" );

  setup();
}
