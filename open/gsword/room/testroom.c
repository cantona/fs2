// Room: /open/gsword/room/testroom
inherit ROOM;

void create()
{
  set ("short", "空房间");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  set("outdoors", "/open/gsword");
  setup();
}
