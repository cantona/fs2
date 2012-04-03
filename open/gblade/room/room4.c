// Room: /u/m/moner/tree/room4.c
inherit ROOM;

void create ()
{
  set ("short", "小径");
  set ("long", @LONG

这是一条羊肠小径，往前望去，只见白石夌崎，或如鬼怪，或似 
猛兽，纵横拱立，路上苔鲜斑驳，藤萝掩映间，只余这条小路蜿延向前。
前方传来阵阵的花香，吸着香气，你不禁有些头晕目眩。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room5.c",
  "south" : __DIR__"room3.c",
]));

  setup();
}
