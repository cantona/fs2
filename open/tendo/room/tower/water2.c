#include <ansi.h>
inherit ROOM;
void create()
{
        set("short", "瀑布");
	set("long",@LONG
一条瀑布由崖上俯冲而下，溅起了一阵阵的涟漪，瀑布中形成了
一道彩虹，水声在湖中产生的拍击声，与山谷间的回响，造成了紫薇
内的一大奇观，蔚为壮观。
LONG
	);
set("exits", ([ /* sizeof() == 2 */ 
"south" : "/open/tendo/room/tower/water.c",
"north" : "/open/tendo/room/tower/cave.c", 
]));
        set("outdoors",1);
	setup();
}



