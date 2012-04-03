//written by acelan...../u/a/acelan/room/wood27.c

inherit ROOM;

void create()
{
        set("short", "树林上的密道");
        set("long", @LONG
有一股巨大的风, 突然刮起又倏然消失, 天色瞬间暗了下来又立
即回复光亮, 似乎在短短的几秒钟内过了一天一夜, 你抬起头来往上
看, 看到远方有一只大鹏正以骇人的速度, 朝南方飞去。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood28.c",
       "south" : "/open/killer/mon/room/wood21.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":1,
   ]));

   set("no_clean_up", 0);

   setup();
}
