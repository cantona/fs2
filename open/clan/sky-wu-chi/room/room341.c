inherit ROOM;
void create() {
	set( "short", "$HIW$毒茶毒粽子$HIG$专卖店$NOR$" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/ping/obj/gold_hand",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file6"    : "/open/killer/weapon/k_head3",
		"file5"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/capital/room/king/obj/km-boots",
		"amount9"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/capital/room/king/obj/km-cloak",
		"amount1"  : 1,
		"file8"    : "/open/ping/obj/chilin_legging",
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/ghost-hole/obj/flute",
		"amount3"  : 1,
	]) );
	set( "build", 10002 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room280",
	]) );
	set( "long", @LONG

来哟!!深宫奇茶清凉消暑~~~

来哟!!火玫瑰茶温热滋补~~~


来呦!!火云柔粽柔嫩香甜~~~


来哟!!五毒怪粽口味奇特~~~


来来来!!全口味收集齐,还送入灭大粽子~~~


自用(自杀)外赠(暗杀)两相宜~~~


$HIW$biwem$NOR$出产品质保证
$HIW$biwem$NOR$出产品质保证


毒到死  $HIC$WA HA HA HA HA$NOR$  ^_^

LONG);
	setup();
	replace_program(ROOM);
}
