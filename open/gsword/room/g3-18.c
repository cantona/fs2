// Room: /open/gsword/room/g3-18.c
inherit ROOM;

void create()
{
  set ("short", "张乘风之寝居");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-17",
]) );

  setup();
}
