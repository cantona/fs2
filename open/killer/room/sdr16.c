inherit ROOM;

void create ()
{
set("short","黄龙组");
  set ("long", @LONG
这里是杀手总坛的地下迷宫，也是由机关手诸冈渡所精心设置。
此处是黄龙组的组长渡永天工作的地方，并没有很多的布置
渡永天的身手，并不比叶秀杀弱，所以你想对他下手的话，最好小心一点
上方似乎有一个出口，可以跳出去，如果想离开可以试试。

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"east" : __DIR__"sdr12.c",
"north" : __DIR__"sdr15.c",
"jump" : __DIR__"outr1.c",
]));
set("objects",([
"/open/killer/npc/hu_fa3.c":1,
]));
  setup();
}