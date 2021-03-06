// Room: /open/badman/room/b12
inherit ROOM;

void create ()
{
  set ("short", "恶人谷北将街");
  set ("long", @LONG
你发现北街上人群来来往往，似乎比南街热闹的多，因为这边
是恶人谷日常生活的重心，包管全恶人谷的吃喝玩乐。看到人们脸
上轻松的表情，你紧绷的神经也稍稍舒缓的下来。或许你可以放松
心情好好的逛一逛。

在西边有座用茅草搭起的简陋草屋。

LONG);

  set("objects", ([ /* sizeof() ==  2 */
  "/open/badman/npc/li_three.c" : 1,
  "/open/badman/npc/vagabond" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"b20",
  "south" : __DIR__"b13",
  "east" : __DIR__"b11",
]));

  setup();
}
