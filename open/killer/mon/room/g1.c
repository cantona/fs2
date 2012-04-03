//written by wataru...../open/killer/mon/room/g1.c
inherit ROOM;

void create()
{
        set("short", "绿云组入口");
        set("long", @LONG
	爬上了绳子之后，你终于来到传说中，镇守后山的绿云组所在地。
	难怪绿云组不易为一般人所发现，因为这里几乎没有突兀建筑物。
	有的只是利用天然的植物，所建设出来的居住地与日常器材。
	四周传来阵阵的清香，这是来自自然的味道，令人神清气爽。

LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : __DIR__"g2.c",
       "west" : __DIR__"g7.c",
       "down" : __DIR__"wood31.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc4.c":2,
       "/open/killer/mon/npc/spy5.c":1,
   ]));

        set("no_clean_up", 0);

        setup();
        }
