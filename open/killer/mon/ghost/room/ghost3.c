//written by acelan...../u/a/acelan/ghost/room/ghost3.c

inherit ROOM;

void create()
{
        set("short", "坟墓");
        set("long", @LONG
......这是一个坟墓, ........................hmm.........
..............一个不大不小的坟墓........................因为
光线不足, 所以四周都看不清楚。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost6.c",
       "west"  : __DIR__"ghost2.c",
       "east"  : __DIR__"ghost4.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
