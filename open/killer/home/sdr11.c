inherit ROOM;

void create ()
{
set("short","杀手地下训练场 C 区");
  set ("long", @LONG
这里是杀手总坛的地下迷宫，也是由机关手诸冈渡所精心设置。
寻常人并无法轻易的离开此处，或许应该小心一点，
但是这里也是顶尖杀手自我训练的好地方。
这里的杀气似乎更盛了，如果没有两把刷子，最好离开这里。
此处都是黑牙联的超级高手，如果你不够强的话最好不要找死。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr15.c",
"east" : __DIR__"sdr7.c",
"south" : __DIR__"sdr12.c",
"north" : __DIR__"sdr10.c",
]));
set("objects",([
"/open/killer/npc/sdkillc.c":2,
]));
  setup();
}