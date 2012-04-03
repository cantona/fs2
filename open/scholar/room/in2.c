// Room: /u/r/red/room/flower.c
inherit ROOM;

void create ()
{
  set ("short", "卧房");
  set ("long", @LONG
这是儒门内堂东边的卧房，只见床上十分的凌乱，
就可知道儒生平常并不整理，看见儒生们正坐卧在床上
研究着四书五经。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"in.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/trainee.c" : 2,
]));

  setup();
}
