inherit ROOM;
void create() {
	set( "short", "创意写作室2" );
	set( "owner", "kanno" );
	set( "light_up", 1 );
	set( "object", ([
		"amount3"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/killer/obj/black",
		"amount5"  : 23750,
		"amount2"  : 1,
		"file4"    : "/open/mogi/dragon/obj/key",
		"amount1"  : 609,
		"file5"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/killer/obj/dagger",
		"file2"    : "/daemon/class/fighter/ywhand",
	]) );
	set( "build", 10470 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room113",
	]) );
	set( "long", @LONG

这里是一间创意写作室，你看到赶稿中正努力的埋头于
书桌上专心的写稿，听说那是小渡大大交代的暑假作业
，在放暑假之前，一定要交出来，否则......嘿....嘿
....嘿....后果不堪设想，会影响到每一位杀手喔，将
无法完成第二段的进阶，况且这样会让赶稿中越来越胖
喔......因为......常言道，食言而肥！！哈....哈..
..哈....


LONG);
	setup();
	replace_program(ROOM);
}
