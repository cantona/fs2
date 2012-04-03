// Room: /open/ping/room/m5.c ~night~(小恋)

inherit ROOM;

void create ()
{
  set ("short", "风行森林");
  set ("long", @LONG

森林中弥漫着一丝雾气,四周长满了高大的树木,使得太阳的光线不容易照进来,冷飕飕的阴
风轻轻的从你身后吹了过来,让你感到微微的寒意,森林中有许多野兽出没,似乎随时都会从
森林黑暗处冲出来,让你不得不提高警觉.你往前方望去,隐隐约约好像看到一座不算太高的
山,过去一探究竟吧。


LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/bear" : 1,
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m2",
  "north" : __DIR__"m8",
  "west"  : __DIR__"m4",
  "east"  : __DIR__"m6",
]));

  setup();
}
