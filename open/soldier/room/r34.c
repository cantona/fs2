
inherit ROOM;
void create()
{
  set ("short", "圆环梯");
  set ("long","
    你不经意的来到这..往下看下去是一座蛮长的圆环梯
，在这里旁边点满了圣火一路的圣火点亮了整个地道不知
道往下走会发生什么事情，如果现在想跑路还可以劳跑，
如果神勇的话旧往下冲吧。

 ");                                  
   set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"r35.c",
  "eastup" : __DIR__"r33.c",
]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup(); 
 
}

