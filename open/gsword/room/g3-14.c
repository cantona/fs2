// Room: /open/gsword/room/g3-14.c
inherit ROOM;

void create()
{
  set ("short", "郑士欣之寝居");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-13",
]) );

  setup();
}
