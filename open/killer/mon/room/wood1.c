//written by acelan...../u/a/acelan/room/wood1.c

inherit ROOM;

void create ()
{
  set ("short", "杀手后山");
  set ("long", @LONG
这里是杀手总坛的后山, 群树参天, 遮住了大部分的阳光, 阴暗
的光线中, 你并没有看到任何人, 可是却仿佛有一股浓浓的杀意正迎
面向你扑来, 你开始怀疑是否要继续前进。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/killer/room/outr11",
  "north" : __DIR__"wood3.c",
]));

  setup();
}
