inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
一走到这里,往四面望去,只看到四周种满了林树,枝头鸟儿高声歌唱
,好一幅悠闲的风景画,顿时让你觉得心旷神怡,而在树林后面隐约有着一
座高塔,不知道里面有着什么东西
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa9",
  "west" : __DIR__"aa13",
]));
}
