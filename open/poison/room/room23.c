inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG
你爬出了地道 ,立时被刺眼的阳光照的睁不开眼睛 ,这里到底是
哪里ㄋ ?左看右看 ,附近一个人都没有 ,真是奇怪 ,看来得继续
前进才能一探究竟了 .....

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room22.c",
  "north" : __DIR__"room24.c",
]));

  setup();
}
