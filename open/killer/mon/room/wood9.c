//written by acelan...../u/a/acelan/room/wood9.c

inherit ROOM;

void create()
{
        set("short", "后山森林");
        set("long", @LONG
你似乎感觉到有人影在树上晃动, 但却又看不到任何东西, 你觉
得这可能是自己的错觉, 一阵阵强风吹来, 树影晃动, 落叶纷纷, 更
加添了你心中的寒意, 你决定加快脚步, 离开这片可怕的树林。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood14.c",
       "west"  : "/open/killer/mon/room/wood8.c",
       "south" : "/open/killer/mon/room/wood4.c",
       "east"  : "/open/killer/mon/room/wood10.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
