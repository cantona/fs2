//open/prayer/room/kiyan/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","书房");
        set("long",@LONG

	书房的书柜全部都是以西洋橡木做成的，高有数丈．柜中四处可见
	古诗古词的书本，内中还参杂不少的武学图腾．不过最引人注意的
	要属那成堆八卦与易理类的书籍了!!

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"3",		//右护法
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

