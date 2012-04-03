// Room: /open/poison/room/road16
inherit ROOM;

void create ()
{
  set ("short", "中庭");
  set ("long", @LONG
你来到了一个庭院，这里种满了各种奇花异草，院内还
种有许多矮竹，短小圆滑的枝节，嗯~~这应该就是可爱的葫
芦竹吧，中间为由汉白玉所铺成的玉路，直达北边大殿，庭
院东西两旁设有小拱门，分别通往各堂楼。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/envoy5" : 1,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"room6",
  "west" : __DIR__"road18",
  "east" : __DIR__"road17",
  "northup" : __DIR__"room7",
]));

  setup();
}
