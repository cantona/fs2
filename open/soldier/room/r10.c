
inherit ROOM;
void create()
{
  set ("short", "地道口");
  set ("long","
    这边是反乱军队所出入的地方，不过当然一个组织
的地方怎么可能只有一个出入口，在你两旁个有一座圣
火，在这里右方好像有点动静。

 ");
   set("exits", ([
   "east"       : __DIR__"r9.c",
      
  ]));      
  set("light_up", 1);
  setup();
} 

