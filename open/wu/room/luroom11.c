// Room: /open/wu/room/luroom11.c
// 泷山武馆的花园
inherit ROOM;
void create ()
{
  set ("short", "花园");
  set ("long", @LONG
这里是泷山武馆的花园,由于泷山武馆的地理位置位在南方所以四季如
春,花繁景致,看到修剪有序的花园,看起来十分清爽,更可以看出平时除
了练武外,更可以培养一些乐趣。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom8",
  "south" : __DIR__"luroom13",
  "east" : __DIR__"luroom12",
]));

  setup();
}
