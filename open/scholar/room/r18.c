// /u/j/judd/room/r18.c
inherit ROOM;

void create ()
{
  set ("short", "中堂东侧");
  set ("long", @LONG
你现在在风与土的图书馆的中间，往北就是风室图书馆，往南就
是土室图书馆，而地板的颜色也从中间对分，北边是代表风的白色，
南边是代表土的黄色，也不知道是用什么东西染的色，看起来相当的
怪异。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"e3.c",
  "south" : __DIR__"r21.c",
  "north" : __DIR__"r15.c",
]));
  set("light_up", 1);

  setup();
}
