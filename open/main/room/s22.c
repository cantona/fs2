// Room: /open/main/room/s22.c

inherit ROOM;

void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

 set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s21",
  "south" : __DIR__"m22",
  "north" : __DIR__"s18",
  "east":"/open/quests/snake/r-01",
]) );

  set("outdoors", "/open/main" );

  setup();
}
