//open/prayer/room/westarea/road27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","街道");
        set("long",@LONG
	西域东部的三叉路口. 北边是往开阳门, 南边是往阵势门.
	圣火教三大绝学之一的浑天心法并不是每个人都能学习的,
	据说要得到浑天水晶之后才能够修练!!浑天水晶共有六只
	之多, 其中的白水晶是记载基础的一至五层内功心法.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road24",	//街道
	"south":__DIR__"road32",	//街道
	"west":__DIR__"road28",		//街道
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
