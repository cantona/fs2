
inherit ROOM;
void create()
{
  set ("short", "仓库");
  set ("long","
    这里是反乱军中最最最重要的地方，这是反乱军所有
囤积粮食的地方，你看到旁边的米堆里发现有一些米虫在
里面爬呀爬的，上面还躺着一个壮汉。

 ");
   set("exits", ([
   "south"   : __DIR__"r2.c",     
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/rice":1,
]));
  set("light_up", 1);
  setup();
} 
