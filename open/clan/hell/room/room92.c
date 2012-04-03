inherit ROOM;
void create() {
	set( "short", "$HIC$‘武天至圣’$NOR$独孤嵊人头放置所" );
	set( "object", ([
		"file6"    : "/open/gblade/obj/sa-head",
		"file5"    : "/open/gblade/obj/sa-head",
		"amount2"  : 1,
		"amount10" : 1,
		"amount5"  : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"file7"    : "/open/gblade/obj/sa-head",
		"amount6"  : 1,
		"file1"    : "/open/gblade/obj/sa-head",
		"amount7"  : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/gblade/obj/sa-head",
		"file4"    : "/open/gblade/obj/sa-head",
		"file2"    : "/open/gblade/obj/sa-head",
		"amount3"  : 1,
		"file8"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
	]) );
	set( "light_up", 1 );
	set( "build", 11340 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room23",
	]) );
	set( "long", @LONG
这里是专门放置‘武天至圣’独孤嵊的人头的地方
由于阴曹地府里的阎罗王和所多手下们拥有超强的实力
所以当然这有超强实力的对手也是甘拜下风，想到这就
想到以前，当我还是个新手时，连这可怕的敌人都还没
打过，就这样的离去时，真是另人觉的可惜。不过现在
和各位好朋友们竟能这样如此容易得到他的人头，现在
想想也是值得的:D。

LONG);
	setup();
	replace_program(ROOM);
}
