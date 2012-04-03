//written by acelan...../u/a/acelan/ghost/room/ghost37.c

inherit ROOM;

void create()
{
        set("short", "黑风组总部");
        set("long", @LONG
这里是黑风组总部的大厅, 只见黑风组长威风凛凛的坐在大厅之
上, 厅前有一个圆桌, 看来应该是议事用的, 大厅的后方就是黑风组
长的卧室, 平时是不准入内的。
LONG);
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost39.c",
       "south" : __DIR__"ghost34.c",
       "east"  : __DIR__"ghost38.c",
       "west"  : __DIR__"ghost36.c",
   ]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/hu_fa6.c" : 1,
  "/open/killer/mon/ghost/npc/black2.c" : 2,
]));

   setup();
}

int valid_leave(object me, string dir)
{
   if (dir == "north")
   {
      if( me->query_temp("ghost") == 2)
      {
         message_vision("黑风组长卫博战说道:「没想到陈星辉是这种人, 快去将他除掉吧!”\n", me);
         return 1;
      }
      else
      {
         message_vision("黑风组长卫博战大喝道:「我的闺房岂是$N所能乱闯的吗?”\n", me);
         return 0;
      }
   }
   return 1;
}
