inherit ROOM;

void create ()
{
  set ("short", "花园");
  set ("long", @LONG
这里是天龙寺中的花园,这里不但栽满了各式各样的珍奇花草,
还种植了很多的稀有茶树,像是"霓裳羽衣、步步生莲、十八学士"
,这大概也是因为大理的茶花甲于天下,在旁边好像有一座高塔,过
去看看吧。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"aa59",
  "northeast" : __DIR__"aa58",
  "south" : __DIR__"aa29",
  "northwest" : __DIR__"aa56",
]));
}
