inherit ROOM;
void create() {
	set( "short", "$HIG$药$HIR$之$HIC$藏$NOR$" );
	set( "owner", "skyent" );
	set( "object", ([
		"amount6"  : 1146,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount2"  : 1,
		"file2"    : "/open/capital/guard/gring",
		"amount7"  : 522,
		"amount10" : 677,
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 1000,
		"file10"   : "/open/mogi/castle/obj/sspill",
		"file5"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount3"  : 219,
		"amount5"  : 1866,
		"file3"    : "/open/fire-hole/obj/b-pill",
		"amount4"  : 1083,
		"file8"    : "/open/ping/questsfan/obj/diamond_belt",
		"file7"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10735 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room297",
		"south"     : "/open/clan/ou-cloud-club/room/room4",
	]) );
	set( "long", @LONG
此处就是当今圣上钦赐给傲云山庄的大内御医〔$HIW$风$HIR$火$HIM$山$HIG$林$NOR$〕的
炼药房，进入此房只有阵阵扑鼻而来的刺鼻味道，而在你眼前所见
到的也就是当今武林极为少数的珍贵草药，还有许多的丹药放在门
后的大柜中，柜上贴着一封条，字条上写明：$BRED$$HIW$偷药者，杀无赦！！$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
