// Room: /open/gsword/room/g3-24.c
inherit ROOM;

void create()
{
  set ("short", "李逍遥之寝居");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-15",
]) );

  setup();
}
