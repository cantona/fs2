inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
这里是天龙寺中通往外院的走道,听说天龙寺中有着许多著名的建筑
诸如三阁、七楼、九殿、百厦,规模宏大,想到这里,不禁令人想好好参观
一下
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa7",
  "west" : __DIR__"aa11",
]));

  setup();
  replace_program(ROOM);
}
