// /u/j/judd/room/r21.c
inherit ROOM;

void create ()
{
  set ("short", "中堂东侧");
  set ("long", @LONG
东南边就是通往土室图书馆的唯一道路，只见地上有一条黄土构
成的道路，只要沿着黄土走，就能到达儒门的四大图书馆之一，土室
图书馆，西边则可通往出口。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"r25.c",
  "north" : __DIR__"r18.c",
]));
  set("light_up", 1);

  setup();
}
