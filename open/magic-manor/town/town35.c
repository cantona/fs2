#include <ansi.h>
#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
        set ("short", "当铺");
        set ("long", @LONG
人总有失意落魄的时候，所以镇上的一个居民就想为镇民服务，
开了这家小当铺，可以典当各式各样值钱的东西，以换取一点点的金
钱做为救急所用。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town29",
	]));

        setup();
}