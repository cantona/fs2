// Room: /open/badman/room/b1.c

inherit ROOM;

void create ()
{
  set ("short", "恶人谷");
  set ("long", @LONG
突然间，你的眼前豁然开朗，四面穷山中，奇迹般的出现了一
片灯火，有如万点明星，眩人夺目。江湖中人心目中所想像的恶人
谷，自然是说不出的阴森、黑暗，但此刻恶人谷中竟是一片辉煌的
灯火。但这灯火非但未使恶人谷的神秘减少，反而使恶人谷更增加
了说不出的诡异。
    灯光下，只见一个石碑(stele)立在道旁。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stele" : "
	入谷入谷，
	永不为奴。
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"b2",
  "east" : __DIR__"b0",
]));

  setup();
}
