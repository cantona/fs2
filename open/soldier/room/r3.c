
inherit ROOM;
void create()
{
  set ("short", "走道");
  set ("long","
    你站在这里依稀还可以见到一点点阳光，此地往左好
像有间奇怪的房间，往右灯火通明好像很热闹的样子，在
你面前有刻着一些字。

             <----XXX    饭厅---->

 ");
   set("exits", ([
   "east"   : __DIR__"r2.c",
   "west"    : __DIR__"r4.c",
  "south"    : __DIR__"r5.c",
  ]));      
  set("light_up", 1);
  setup();
} 
