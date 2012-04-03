// Room: /u/s/sueplan/newplan/area/f3.c
inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG
春雨霏霏连日不绝，潮润得四处泥泞难行，农家们把旧年的稻草，
就着破瓦碎石，平整扎实地铺出一条路来；路旁不知名的小花兀自绽着
蓓蕾，更有初植下的秧苗，吃足了雨水莹着绿油油的粉翠，衬着远处农
舍的炊烟袅袅，正是春天好风光。
LONG);

  set("outdoors", "l");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"f4.c",
  "north" : __DIR__"f2",
]));

  setup();
}
