// Room: /u/s/smore/room/suking/suking9.c

inherit ROOM;
void create ()
{
  set ("short", "蜀中花园");
  set ("long", @LONG
这里是蜀中大将军心爱的花园,种满了各地收集来的奇花异草,
只见处处馨香,团花仅簇,但却有那么一点点的奇异,就是这若大
的花园里,竟不见蝶飞蜂舞,似忽有些密秘.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");
  set("exits", ([ /* sizeof() == 2 */
    "north":__DIR__"suking10",
    "east":__DIR__"itroom4",
    "west":__DIR__"itroom.c",
  ]));
  setup();
}
