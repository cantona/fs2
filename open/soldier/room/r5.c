
inherit ROOM;
void create()
{
  set ("short", "走道");
  set ("long","
    这里往西南好像有些人在那里巡逻往东南也是一样，
北边似乎可以通道别的地方，这里四面充满了泥土的味道
闻起来有点让人反胃。

 ");
   set("exits", ([
   "southeast"   : __DIR__"r9.c",
   "southwest"   : __DIR__"r11.c",
   "north"       : __DIR__"r3.c",
   
  ]));      
  set("light_up", 1);
  setup();
} 
