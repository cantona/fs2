//written by acelan...../u/a/acelan/ghost/room/ghost31.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 不过这条却出奇的隐密, 再往东去,
是一望无际的墓园, 而北面则是一面土墙壁(wall), 看来小径到了这
里, 确实是已经到了尽头了。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west"  : __DIR__"ghost30.c",
   ]));
   set("no_clean_up", 0);

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
   me->move( __DIR__"ghost34");
   return 1;
}
