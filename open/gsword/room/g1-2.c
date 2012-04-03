// Room: /open/gsword/room/g1-2.c
inherit ROOM;

void create()
{
  set ("short", "偏厅");
  set ("long", @LONG
这里是仙剑派的接待厅, 由于掌门已经不管门派的事了, 所以上门
亲朋好友, 各派人士, 都必须先经过通报, 在此等候掌门的接见, 为了
不让客人闲着, 这里摆了各家的名画, 当然也缺少不了一些棋子棋盘等
等的东西 .

LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"g1-1",
]) );

  setup();
}
