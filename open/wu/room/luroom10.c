// Room: /open/wu/room/luroom10.c
// 泷山武馆的练武场
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
你站在泷山派练武场的一角,你眼前摆满了许多的铁头人,铁头人身上拳
痕磊磊,指痕洞洞,想必是武馆弟子用来练拳的地方,你现在看到二位泷山
武学精深的弟子正在和铁头人拆招。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"luroom7",
  "north" : __DIR__"luroom9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/f_trainee" : 2,
]));

  setup();
}
