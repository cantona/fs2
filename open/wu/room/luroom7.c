// Room: /open/wu/room/luroom7.c
// 泷山武馆的练武场
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
你站在泷山派练武场的一角,你眼前摆满了许多的铜头人,铜头人身上拳
痕磊磊,指痕处处,想必是武馆弟子用来练拳的地方,你现在看到二位泷山
武学精深的弟子正在和铜头人拆招。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom4",
  "north" : __DIR__"luroom6",
  "east" : __DIR__"luroom10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/d_trainee" : 2,
]));

  setup();
}
