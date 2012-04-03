//written by acelan...../u/a/acelan/room/wood19.c

inherit ROOM;

void create()
{
        set("short", "中央神木");
        set("long", @LONG
这里是杀手森林的中央, 中央高耸着一棵神木, 神木的边上有一
个入口, 可以直接通往神木的上方及底部。北方传来阵阵寒意, 有股
莫名的恐惧突然由心升起, 莫大的压力遽然的朝你而来。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "up" : "/open/killer/mon/room/wood20.c",
       "down" : "/open/killer/mon/room/wood18.c",
       "north" : "/open/killer/mon/room/wood26.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":2,
   ]));
   set("no_clean_up", 0);

   setup();
}
