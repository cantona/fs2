inherit ROOM;
void create() {
	set( "short", "非洲野外笼" );
	set( "owner", "alucard" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room121",
	]) );
	set( "light_up", 1 );
	set( "build", 4036 );
	set( "object", ([
		"file3"    : "/obj/example/dagger",
		"file2"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/capital/guard/gring",
		"amount3"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
	]) );
	set( "long", @LONG

    轰隆轰隆的转动声此起彼落,令你好奇的睁大了眼睛四处张望,哇~~~~
赫然发现这里摆了好多个滚轮,其中有些正不停地转动着,而滚轮之中,更藏
着一只只可爱的枫叶鼠!!加卡利亚,坎培尔,罗勃夫斯基...各种你想得到的
品种都可以在这里看到,而这些小家伙一看到你这个陌生人来到这边,也好奇
的停下手边的事,眼睛睁得大大的盯着你瞧,但不久之后,又开始跑滚轮的跑
滚轮,吃东西的吃东西了,看来他们的主人必定很细心照顾及训练他们,才能
让他们如此的有安全感.

LONG);
	setup();
	replace_program(ROOM);
}
