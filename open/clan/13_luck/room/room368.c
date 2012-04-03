inherit ROOM;
void create() {
	set( "short", "友情" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"amount2"  : 17,
		"file6"    : "/open/killer/outsea/dstone",
		"amount3"  : 89,
		"file1"    : "/open/doctor/pill/sky_pill",
		"file2"    : "/open/doctor/pill/human_pill",
		"amount4"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"file4"    : "/open/killer/outsea/dstone",
		"amount7"  : 333,
		"file3"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 317,
	]) );
	set( "build", 10203 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room196",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    友情....是种很奇妙的东西....它和爱情不一样....当你拥有友
情的时候...你在任何时候都是快乐的...每个人都喜欢结交朋友....
但如果你交了一大堆朋友....却没有一个是可以说心事的....是否会
感到很无奈呢?我会觉得很无奈...人的一生中不求很多朋友....但是
想要至少有几个知心的...这样就足够了...我有几个知心的朋友....
我很珍惜...因为曾经我在友情路上走的非常辛苦...也差点失去了这
些朋友...但在接受一切友情的考验...我还是与他们建立了最真挚的
情谊...我很珍惜很珍惜...人不能没有朋友....所以大家要好好珍惜
身边的朋友哦~~^^

LONG);
	setup();
	replace_program(ROOM);
}
