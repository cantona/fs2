inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
你可以看到湖泊旁，伫立着几只人间界的鱞鸟，一种会捕鱼的鸟
，真没想到竟然在此地也可以看到如此的生物，你不禁感慨着这里的
生活，真是一个安详的地方啊～
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-09",
"west":__DIR__"a-07",
]));
	setup();
}

 