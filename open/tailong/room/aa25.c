inherit ROOM;

void create ()
{
  set ("short", "天龙八部阵");
  set ("long", @LONG
这里的地上有着一个正八边形(picture),而这个八边形似乎隐约透出一
股强大的神力,这股力量笼罩了整个房间,让你有一种不寒而栗的感觉, 仿
佛一触碰到那个图形就会有危险。
LONG);

  set("exits", ([ /* sizeof() == 1*/
  "north" : __DIR__"aa24",
]));
}
