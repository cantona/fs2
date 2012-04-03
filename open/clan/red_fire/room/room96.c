inherit ROOM;
void create() {
	set( "short", "$HIC$青霞$HIG$的$HIW$房间$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/gsword/obj/yuskirt",
		"file6"    : "/open/dancer/obj/maple_ribbon",
		"amount2"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/ywhand",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/love/obj/boots",
		"file8"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "waydancer" );
	set( "build", 10046 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room84",
		"north"     : "/open/clan/red_fire/room/room98.c",
		"south"     : "/open/clan/red_fire/room/room97.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

这是$HIC$fs$NOR$中$HIR$红莲教$HIC$风青霞$NOR$的$HIW$房间$NOR$，说起这房间可是有故事的
如果想知tell我吧
你一进门就看到了一幅大卷轴上面是我提的诗
$HIM$人去楼空剑依在
$HIC$萍水相逢相恨晚
$HIY$今朝一别何重聚
$HIR$桃花澥落桃花开
$NOR$唉，你不经叹到好一首诗丫


LONG);
	setup();
	replace_program(ROOM);
}
