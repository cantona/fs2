inherit ROOM;
void create() {
	set( "short", "小喵防具间" );
	set( "owner", "cong" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file7"    : "/daemon/class/blademan/obj/six-neck",
		"amount6"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_armor",
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"file10"   : "/open/magic-manor/obj/soil-ball",
		"amount7"  : 1,
		"amount5"  : 1,
		"file1"    : "/obj/gift/hobowdan",
		"amount8"  : 1,
		"file8"    : "/open/gblade/obj/sa-head",
		"amount3"  : 1,
		"amount4"  : 5,
		"amount10" : 1,
		"file4"    : "/open/fire-hole/obj/w-pill",
		"amount2"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_belt",
		"file9"    : "/open/gblade/obj/sa-head",
		"file3"    : "/open/ping/questsfan/obj/diamond_boots",
	]) );
	set( "build", 10037 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room242",
		"north"     : "/open/clan/sky-wu-chi/room/room99.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这是一小喵专用的防具间 , 这里放着各式各样的防具 , 为
世界防具最为齐全之地 , 你看到各种奇怪的防具 , 所谓工欲善
其事 ,必先利其器 , 看来 ,你也该为自己选把像样的防具 , 好
闯荡江湖 .你可以看看(list)参观一下这里的防具 ?

LONG);
	setup();
	replace_program(ROOM);
}
