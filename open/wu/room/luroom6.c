// Room: /open/wu/room/luroom6.c
// 泷山武馆的练武场
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是泷山派练武场地的中庭,一条由花岗石所铺成的道路向泷山派的
大厅而去,西边直行的话是通往泷山派的大门,花岗道路的二旁放满了椅
子,想必是泷山派用来考较弟子的武学程度的地方。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"luroom5",
  "west" : __DIR__"luroom3",
  "south" : __DIR__"luroom7",
  "east" : __DIR__"luroom9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/b_trainee" : 2,
]));

  setup();
}
