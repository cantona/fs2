// Room: /open/poison/room/road10
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
东边湖水清澈透明，可见鱼儿悠游于湖中，湖面上则有
三两只小水鸭，水鸭们快乐的戏水着，微风吹拂湖面荡漾起
阵阵青波，不远的前方可见一牌楼矗立在那儿。
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/poison/room/road9",
  "northwest" : "/open/poison/room/road11",
]));

  setup();
}
