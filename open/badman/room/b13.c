// Room: /open/badman/room/b13
inherit ROOM;

void create ()
{
  set ("short", "恶人谷北法街");
  set ("long", @LONG
你发现北街上人群来来往往，似乎比南街热闹的多，因为这边
是恶人谷日常生活的重心，包管全恶人谷的吃喝玩乐。看到人们脸
上轻松的表情，你紧绷的神经也稍稍舒缓的下来。或许你可以放松
心情好好的逛一逛。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"b7",
  "north" : __DIR__"b12",
]));
  set("outdoors", "/open/badman");

  setup();
}
