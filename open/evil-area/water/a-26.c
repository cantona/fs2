inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"HIG" 同 心 桥 "NOR);
	set("long",@LONG
两个强大的邪灵正站立于两旁，仿佛门神般的守护着这，感觉上
里面似乎住着十分尊贵的人物，不过却有一种被软禁的感觉，看来尽
管是你，也无法通过这一扇门进入此建筑物内。
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"a-25",
]));
	setup();
}

 