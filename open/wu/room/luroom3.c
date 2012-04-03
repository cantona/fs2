// Room: /open/wu/room/luroom3.c
// 泷山武馆的练武场
inherit ROOM;
void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
这里是泷山派练武场地的中庭,一条由花岗石所铺成的道路向泷山派的
大厅而去,西边通往泷山派的大门,花岗道路的二旁放满了各式各样的武
器,想必泷山派虽是拳术门派,但是其他的武器也是精通的。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"luroom1",
  "south" : __DIR__"luroom4",
  "north" : __DIR__"luroom2",
  "east" : __DIR__"luroom6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/b_trainee" : 2,
]));

  setup();
}
