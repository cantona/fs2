// Room: /open/poison/room/path3
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
进入此密道，你觉得这里湿气很重，阴森森的气氛让你
感到非常难受，你恨不得早点离开这里，角落有一道向下的
楼梯。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/poison/room/room5",
  "westdown" : "/open/poison/room/path4",
]));

  setup();
}
