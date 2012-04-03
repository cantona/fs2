// Room: /open/badman/room/t7
inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
空气中传来一丝血腥味，看来应该快到尽头了。前头仍旧是一
片漆黑，声音静的出奇，但是你确定黑暗中有某个东西正在看着自
己。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/badman/room/tigerhole",
  "west" : "/open/badman/room/t3",
]));

  setup();
}
