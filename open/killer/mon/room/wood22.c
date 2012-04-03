//written by acelan...../u/a/acelan/room/wood22.c

inherit ROOM;

void create()
{
        set("short", "树林上的密道");
        set("long", @LONG
你走上了楼梯, 很讶异的发现树林上竟然有一条精心设计的密道
, 如果没有相当程度的轻\功, 是无法继续前进。你小心翼翼的踏着树
枝, 缓缓前进。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood29.c",
       "west" : "/open/killer/mon/ghost/room/ghost1.c",
       "down" : "/open/killer/mon/room/wood15.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":2,
   ]));

   set("no_clean_up", 0);

   setup();
}
