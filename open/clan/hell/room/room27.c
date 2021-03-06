inherit ROOM;
void create() {
	set( "short", "$HIW$六色$HIC$龙元$NOR$之界" );
	set( "object", ([
		"amount1"  : 69,
		"file1"    : "/open/mogi/dragon/obj/power",
	]) );
	set( "light_up", 1 );
	set( "build", 10104 );
	set( "exits", ([
		"WWW"       : "/open/clan/hell/room/room71",
		"BBB"       : "/open/clan/hell/room/room70",
		"YYY"       : "/open/clan/hell/room/room74",
		"east"      : "/open/clan/hell/room/room23.c",
		"RRR"       : "/open/clan/hell/room/room73",
		"GGG"       : "/open/clan/hell/room/room68",
		"PPP"       : "/open/clan/hell/room/room69.c",
		"SSS"       : "/open/clan/hell/room/room72.c",
	]) );
	set( "long", @LONG
相传打死传说中的六色火龙,可以得到牠们身上增加大幅能力的精元,为了增加
本帮的战力,帮主会将收集来的精元存放于此处,用来当做帮中出动的时候,可以增加
帮众的能力,所以此处的守卫也是相当严密的,若是被帮主发现有人擅自拿走这里的
精元,必将遭到全地府的追杀

LONG);
	setup();
	replace_program(ROOM);
}
