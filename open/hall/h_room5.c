// Room: /open/hall/h_room5.c
inherit ROOM;

void create()
{
        set("short","花厅走道");
        set("long",@LONG
这里是花厅前的走道，在这可以隐约地听见花厅里的喧闹声～～
这儿和其他走廊一比，显的华丽多了！由樟木精制的梁柱，散发出阵阵
优雅的淡淡香气，令人心情为之一振。
LONG);
        set("exits",([
  "west":__DIR__"hall_3",
  "north":__DIR__"h_room4",
  "east":__DIR__"h_room6",
]));

        setup();
}
