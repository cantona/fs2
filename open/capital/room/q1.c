// Room: /open/capital/room/g1
inherit ROOM;

void create ()
{
  set ("short", "幽暗的密道");
  set ("long", @LONG
隧道延伸到这里, 前头的亮光越发显的明亮, 隐隐约约的看过去,
好似是一栋石室的样子, 你手上的持的亮光摇摇晃晃的, 映的你的身影
也摇曳不定。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"q0",
  "east" : __DIR__"q2",
]));
  set("no_transmit", 1);

  setup();
}
