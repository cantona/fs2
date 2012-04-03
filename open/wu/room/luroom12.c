// Room: /open/wu/room/luroom12.c
// 泷山武馆的花园
inherit ROOM;
void create ()
{
  set ("short", "花园");
  set ("long", @LONG
这里是泷山武馆的花园,由于泷山武馆的地理位置位在南方所以四季如
春,花繁景致,一阵阵和煦的风吹来,让人精神气爽,消除了在平时练武
的辛苦,四周蝴蝶飞舞,更是谈请说爱的好地方。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom11",
  "south" : __DIR__"luroom14",
  "east" : __DIR__"luroom15",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/bufferfly" : 2,
]));

  setup();
}
