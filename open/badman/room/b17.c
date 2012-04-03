// Room: /open/badman/room/b17
inherit ROOM;

void create ()
{
  set ("short", "恶人谷南街");
  set ("long", @LONG
走到这里你突然发现人群好似越来越少，原来自己离开大闹街
已有一段距离了。你发觉自己竟不知觉的来到恶人谷南街最偏僻的
地方；而最近更听说有小混混在此抢钱伤人之事发生，想到这点你
不由得的加快自己的脚步。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/hood1.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b18",
  "east" : __DIR__"b16",
]));

  setup();
}
