
inherit ROOM;
void create()
{
  set ("short", "偏听");
  set ("long","
    这理事接待客人的地方，提供长期跋涉而来的武侠豪
杰，这里通风良好，在旁边种满了盆栽，不时有花草之味
遍布整个房间，让房间不会有异味。

 ");
   set("exits", ([
   "east"   : __DIR__"r20.c",     
  ]));      
  set("light_up", 1);
  setup();
} 

