inherit ROOM;

void create ()
{
  set ("short", "小路");
  set ("long", @LONG
走道这里 ,已经可以清楚的听见流水的声音 ,西边有一条陡直的
山路 ,大概是有什么高人住在上面吧 .....

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room25",
  "north" : __DIR__"room27",
  "westup" : __DIR__"room32",
]));
  setup();
}


