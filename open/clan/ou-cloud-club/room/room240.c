inherit ROOM;
void create() {
	set( "short", "颖颖的隐身小屋" );
	set( "object", ([
		"file1"    : "/open/fire-hole/obj/k-pill",
		"amount1"  : 3,
		"file4"    : "/open/killer/obj/hate_knife",
		"amount2"  : 6,
		"file2"    : "/open/ping/obj/poison_pill",
		"amount4"  : 12784,
		"amount3"  : 1,
		"file3"    : "/open/mogi/castle/obj/blood-water",
	]) );
	set( "light_up", 1 );
	set( "build", 10009 );
	set( "owner", "sakira" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room236",
	]) );
	set( "long", @LONG
这是颖颖平常休息的地方,在你面前有个非常奇怪的小盒子.....
似乎有个不可思议的宝物,你非常非常的好奇.....
却又非常非常在意四周的环境,总觉得到处都是颖颖的身影....
逼的不敢你前进且马上想离开这个地方.....
ㄏㄨ~~ㄏㄨ~~ㄏㄨ~~ㄏㄨ~~ㄏㄨ~~ㄏㄨ
突然颖颖出现在你的身旁....*^_^*...@#$%!


LONG);
	setup();
	replace_program(ROOM);
}
