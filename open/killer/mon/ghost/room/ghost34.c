//written by acelan...../u/a/acelan/ghost/room/ghost34.c

inherit ROOM;

void create()
{
        set("short", "黑风组总部");
        set("long", @LONG
这里是黑风组的总部, 黑风组员一个个神色木然, 看起来颇不易
与, 四周空荡荡的, 除了墙上钉了几把千古恨外, 便再无其他东西了
, 看来黑风组并不富裕。南边有片很特别的土墙壁(wall)。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost37.c",
       "east"  : __DIR__"ghost35.c",
       "west"  : __DIR__"ghost33.c",
   ]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black2.c" : 2,
]));
   setup();
}

void init()
{
   add_action("do_search", "search");
}

int do_search( string str)
{
   object me= this_player();
   if( str != "wall")
   {
      message_vision("你要找什么...\n", me);
      return 0;
   }
   message_vision("你赫然发现这土墙其实是一扇旋转门, 你一拍墙壁, 随着墙壁旋转进去了。\n", me);
   me->move( __DIR__"ghost31");
   return 1;
}
