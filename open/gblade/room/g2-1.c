inherit ROOM;
void create ()
{
  set ("short", "长廊");
  set ("long", @LONG

角落挂着水晶玻璃各色风灯，精致非常。你想像到了晚上，所有的灯都点
起来，那银光雪浪的光景；心里不禁暗暗叹到：‘太奢华浪费了。’
长廊一边是通往王宅的内院，一边是通往王宅招待外宾的厢房。


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 2 */
   "north" :__DIR__"g2-2.c",
   "south" :__DIR__"g1-6.c",
]));

  setup();
}


