inherit ROOM;

void create ()
{
  set ("short", "内院走道");
  set ("long", @LONG

这里是金刀门王宅的内院，内院呈一个口字型，中间是一个花园，花园四
周是王元霸家眷的住处，你看看四周房间，门栏窗隔俱是细雕时新花样，
并无朱粉涂饰。


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 3 */
   "south" :__DIR__"g3-5.c",
   "north" : __DIR__"g3-3.c",
   "east" : __DIR__"g3-8.c",
]));

  setup();
}

