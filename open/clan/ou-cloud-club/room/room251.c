inherit ROOM;
void create() {
	set( "short", "$HIC$Nine Inch Nails$NOR$" );
	set( "object", ([
		"file6"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/killer/obj/bellstar",
		"amount8"  : 99999,
		"file4"    : "/open/killer/obj/bellstar",
		"amount3"  : 99999,
		"amount9"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"amount4"  : 99999,
		"amount2"  : 99999,
		"file3"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/killer/obj/bellstar",
		"amount6"  : 99999,
		"amount5"  : 99999,
		"amount1"  : 99999,
		"file1"    : "/open/killer/obj/bellstar",
		"file9"    : "/open/killer/obj/bellstar",
	]) );
	set( "owner", "devil" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room255",
		"up"        : "/open/clan/ou-cloud-club/room/room177.c",
	]) );
	set( "build", 15614 );
	set( "long", @LONG
  
  The Fragile 打破既定音乐格局，全面改造音乐结构，优美精致
的旋律织进不协调的吵杂空间，并且无预警的转入交响弦乐的世界
，然后再切入另一境界，更出人意表的是弦乐与电子合成器的铺设
比重，再经由独到的思绪过滤，使作品萃取出一种全然不同的旋律
架势。

LONG);
	setup();
	replace_program(ROOM);
}
