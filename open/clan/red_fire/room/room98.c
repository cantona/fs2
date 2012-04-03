inherit ROOM;
void create() {
	set( "short", "$HIC$青霞$NOR$的$HIY$eq$HIW$房$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file2"    : "/open/common/obj/pill2",
		"file4"    : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 40,
		"file1"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
	]) );
	set( "owner", "waydancer" );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room96",
	]) );
	set( "long", @LONG

一进门你看到了，这是一间放$HIY$eq的房间$NOR$
里面的eq可是我拼死拼活打出来的
所以件件$HIY$珍贵$NOR$
件件都可展现出我的$HIR$血汗
$NOR$唉，这就是赚eq的悲哀吧!!!!
不过我还是会努力的去拿最好的eq
壮大$HIR$红莲教$NOR$......


LONG);
	setup();
	replace_program(ROOM);
}
