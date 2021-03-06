inherit ROOM;
void create() {
	set( "short", "$RED$$HBGRN$阿噜米的花园$NOR$" );
	set( "owner", "amei" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_armor",
		"file9"    : "/open/gblade/obj/sa-head",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
		"file6"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/ping/questsfan/obj/diamond_belt",
		"file7"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount8"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file2"    : "/open/ping/questsfan/obj/diamond_legging",
		"file4"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount10" : 1,
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "build", 10480 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room209",
		"south"     : "/open/clan/sky-wu-chi/room/room251.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
此地花香鸟语，令人不禁放松心晴，原来这里是$HIR$阿噜米$NOR$
的后花园，满园子的东瀛奇花异草，当然也有$CYN$黑牙联$NOR$的秘草
～$HIG$富士山秘草$NOR$。为了要更进一步研究秘草的功用，当年$HIR$阿噜
米$NOR$特地向$HIR$叶秀杀$NOR$请示，将它移植到此处栽种的，以便能早一
日发现能更壮大$CYN$黑牙联$NOR$的方法。

LONG);
	setup();
	replace_program(ROOM);
}
