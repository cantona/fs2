inherit ROOM;
void create() {
	set( "short", "$HIB$藏$HIC$剑$CYN$室$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/scholar/obj/icefan",
		"amount2"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/gsword/obj/may_ring",
		"file2"    : "/daemon/class/fighter/figring",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10690 );
	set( "light_up", 1 );
	set( "owner", "zxc" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG
这是$MAG$梦心$NOR$的藏剑之处,一进房间即看到一堆名贵的$HIR$神兵利器$NOR$
随意的挂在墙上,显示出主人的$CYN$阔气与豪气$NOR$,其中正中央挂着主人
最爱的神兵-$HIC$★倚天剑★$NOR$,由剑上的$RED$血迹斑斑$NOR$显示出它跟主人纵横
武林的$HIG$荣迹$NOR$,令人觉得不愧为$HIC$天下第一神兵!$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
