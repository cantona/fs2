// Room: /open/badman/room/t2.c

inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG
你慢慢的往前走，眼睛总算是稍微能够适应这里的黑暗。四周
的山壁上竟长满了一根根的藤蔓，让你不禁感到奇怪，在地道中没
有阳光这些植物怎么能够生长呢?

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/badman/room/t3",
  "south" : "/open/badman/room/t1",
]));

  setup();
}
