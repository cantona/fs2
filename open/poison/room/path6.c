// Room: /open/poison/room/path6
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
你发现这里点点血迹，处处刀痕剑痕的，墙壁上还留下
几处深深掌印，有些掌印奇黑无比，莫非就是毒掌留下的痕
迹，地上白骨成堆，可想当时战况是何等的惨烈，心想难不
成这就是号称‘神魔大战’之役的地方。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/path5",
  "north" : "/open/poison/room/path7",
]));

  setup();
}
