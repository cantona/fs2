inherit ROOM;
void create() {
	set( "short", "制毒房" );
	set( "owner", "biwem" );
	set( "object", ([
		"file8"    : "/open/killer/weapon/k_head3",
		"amount1"  : 1,
		"amount5"  : 2341,
		"file2"    : "/open/killer/weapon/k_head3",
		"file5"    : "/obj/poison/rose_poison",
		"file4"    : "/obj/poison/five_poison",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/obj/poison/dark_poison",
		"amount6"  : 1,
		"amount4"  : 2550,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/fire/obj/fire-fan",
		"file6"    : "/obj/gift/unknowdan",
		"amount3"  : 2419,
		"amount7"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10468 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room175",
	]) );
	set( "long", @LONG
这是机器人一号ㄉ秘密制毒场
到处放着机器人一号ㄉ半成品
由于他是天字第一号ㄉ大懒虫
所以永远看不到他ㄉ完美成品
不过他ㄉ愿望却是能有所大成
不过他ㄉ愿望却是能有所大成
所以他正在找人帮他完成愿望

做出无人能敌ㄉ毒药完美毒药
LONG);
	setup();
	replace_program(ROOM);
}
