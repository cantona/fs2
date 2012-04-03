// Room: /open/main/room/s4.c

inherit ROOM;

void create ()
{
  set ("short", "草原");
  set ("long", @LONG
这里是大草原的西边, 往西边看过去, 是黑压压的密林, 也许里面有不可
思议的怪物, 还是少进去为妙! 南边高高耸立着
一座高山, 山顶不知是云还是雪, 一片白茫茫, 那里难道是蜀山?
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/main/room/F6",
  "north" : "/open/main/room/s1",
  "east" : "/open/main/room/s5",
]));

  set("outdoors", "/open/main");

  setup();
}
