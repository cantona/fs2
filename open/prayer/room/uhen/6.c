//open/prayer/room/uhen/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	在厅上可以见到许多较高职位的门徒，一个个面目严
	肃站在那里，等候着向门主报告份内的职责，以便能
	让门主适时的处理掉棘手的问题．教头可能是没有什
	么问题吧！看他一付很轻松的样子．

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"3",		//右护法
        "west":__DIR__"7",		//议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general" : 1,		//教头
]));

   setup();
}
