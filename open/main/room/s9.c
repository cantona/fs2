// Room: /open/main/room/s9.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

    set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s8",
  "south" : __DIR__"L3",
  "north" : __DIR__"d8",
]) );

  set("outdoors", "/open/main" );

  setup();
}
