inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG

角落挂着水晶玻璃各色风灯，一边还挂着五美图，五美分别是中国五个才
色俱佳的女子--西施、虞姬、明妃、绿珠、红拂，你走近过去一看，每一
幅画都题有诗句在旁。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"g2-1.c",
  "west" : __DIR__"gblade",
  "east" : __DIR__"g1-7.c",
]));

  set("light_up", 1);

  setup();
}
