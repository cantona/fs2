#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","蜀中城驿站");
	set( "build", 74 );
    set("long",@LONG
这里是蜀中城的驿站, 因为这里是通往昆仑山及仙剑派的必经之路, 
所以你可以看到路上一堆道士跟剑客
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su2",
]));

    setup();
}
