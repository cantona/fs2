
inherit ROOM;
void create()
{
  set ("short", "体检处");
  set ("long","
    来这边报到的人一定都要通过体能测验，才能入伍
当然了..这里的体能教练一定是很能干的，在地上有一
个哑铃(dumbbell)你可以拿起来看看。

 ");
   set("exits", ([
   "west"       : __DIR__"r16.c",
      
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/john":1,
]));
  set("light_up", 1);
  setup();
} 

