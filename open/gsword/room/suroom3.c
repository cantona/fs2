// Room: /open/gsword/room/suroom3.c

inherit ROOM;

void create ()
{
  set ("short", "富商家");
  set ("long", @LONG
这是一间什么也没有的空房间。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/su12",
]));

  set("light_up", 1);

  setup();
}
