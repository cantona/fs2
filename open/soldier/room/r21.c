
inherit ROOM;
void create()
{
  set ("short", "走道");
  set ("long","
    这里有一些守卫像流浪汉般的在这巡逻神怕被别人侵
占的样子北边似乎可以通道别的地方，这里四面充满了泥
土的味道闻起来有点让人反胃，在南方好像很热闹的样子

 ");
   set("exits", ([
   "south"   : __DIR__"r26.c",
   "north"   : __DIR__"r19.c",
   
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/ma1":1,
]));
  set("light_up", 1);
  setup();
} 
