
inherit ROOM;
void create()
{
  set ("short", "哨站");
  set ("long","
    这里是一处拦检处，未经过身分确认是没办法过去的
你从这边望哨站后面望过去好像有很多人，在北边可以通
到别的地方，你可以过去逛逛。

 ");
   set("exits", ([
   "east"       : __DIR__"r8.c",
   "northwest"  : __DIR__"r5.c",
   "west"       : __DIR__"r10.c",
  ]));      
  set("objects", ([ /* sizeof() == 2 */
    "/open/soldier/npc/sentry":2,
]));
  set("light_up", 1);
  setup();
} 
