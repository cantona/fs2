#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "通吃小筑一楼");
  set ("long", @LONG

   这是由天才机关手诸冈渡与天灵老人，两人合力完成的迷阵屋
   放眼望去每个房间长的都一样，让你难以分辨，到底要如何去行走？

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "east" : __DIR__"hr13.c",
     "down" : __DIR__"hr8.c",   
     "north" : __DIR__"hr7.c",   
     "south" : __DIR__"hr11.c",   
]));

 set("objects",([
  "/open/killer/npc/spy4.c":1,]));
  setup();
}

void init()
{
//
}

int do_look(string str)
{
  object me;

   if(str )
    return notify_fail("你想看什么？？看看有没有人救你吗？？用哭的比较快啦！！\n");
   return 1;
}
