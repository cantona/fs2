// Room: /open/death/room/h1-6
inherit ROOM;

void create ()
{
  set ("short", "第一殿--通道");
  set ("long", @LONG
你走近这里，看到北方灯火通明，原来北方正是冥府的第一殿，由
秦广王所管辖，一般做善事的人，死后牛头马面都会把他先带到秦广王
面前，在由各路诸神依其功德接引上天庭或带去投胎转世。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"h1-7",
  "south" : __DIR__"h1-3",
  "north" : __DIR__"h1-1",
  "east" : __DIR__"h1-5",
]));
  set("light_up", 1);

  setup();
}
