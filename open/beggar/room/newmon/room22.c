#include <ansi.h>
inherit ROOM;

void create()
{
 set("short",""HIC"降龙堂"NOR"");
 set("long",@LONG
偌大的房间里，一尊数尺高的降龙罗汉象耸立在前方，
一条龙磐踞在降龙罗汉的身上，缠住降龙罗汉的十二大
要穴，仿佛在用性命保护着降龙罗汉。堂中摆了一张椅
子，两旁的扶手雕刻成龙头，像是坐在龙上，看来这应
该是帮主坐的「降龙椅”了，房间的两旁左右各摆了几
张桌椅，这些应该是丐帮分舵舵主所坐的位置了。

LONG);
 set("exits",([
 "east" : __DIR__"room10.c",
 "west" : __DIR__"room08.c",
 "eastup" : __DIR__"room03.c",
 "westup" : __DIR__"room02.c",
 "south" : __DIR__"room18.c"
 ]));
 setup();
}
