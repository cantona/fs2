

inherit ROOM;
void create()
{
  set ("short", "报到处");
  set ("long","
    这里是反乱军们报到的地方，这里集结了一些外国
豪杰，个个都示威武雄壮，在前方有一方桌站着一排人
好像都来报到练武的。

 ");
   set("exits", ([
   "west"       : __DIR__"r8.c",
      
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/alo":1,
]));
  set("light_up", 1);
  setup();
} 

