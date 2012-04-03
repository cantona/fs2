#include <room.h>

inherit ROOM;

void create()
{
	set("short","听风轩");
	set("long",@LONG
这里是独孤居里的听风轩，在这里西面有一扇大窗，独孤愁生前亦时常
来此，吹吹晚风，欣赏夕阳西沉的景象。在此窗户上挂着一串风铃，每当微
风吹来，发出一阵阵咚咚的声音，令人陶醉不已。
 
LONG);
        set("exits", ([
	"south":__DIR__"ducu_live3",
        ]) );
	set("light_up",1);
	set("objects",([
	"/open/snow/npc/dugur.c" : 1,
	]));
        setup();
}
