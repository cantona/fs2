// Room: /open/poison/room/path8
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
这里应该就是令人畏惧心寒的‘阴朁道’吧，北边可见
到令人感到温暖窝心的光线，想必那边是此密道的出口，不
自觉地你被那光线所吸引，极想尽快离开这阴森湿冷，又充
满危机的鬼地方。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/poison/room/path7",
  "northwest" : "/open/poison/room/path9",
]));

  setup();
}
