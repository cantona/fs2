inherit ROOM;
void create() {
	set( "short", "寻刀" );
	set( "owner", "yaoblade" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file5"    : "/daemon/class/blademan/obj/six-neck",
		"file2"    : "/daemon/class/blademan/obj/six-neck",
		"amount4"  : 1,
		"amount6"  : 1,
		"file10"   : "/daemon/class/blademan/obj/ublade",
		"file8"    : "/daemon/class/blademan/obj/ublade",
		"amount10" : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/killer/obj/k_ring",
		"amount5"  : 1,
		"file7"    : "/daemon/class/blademan/obj/ublade",
		"file4"    : "/open/capital/obj/blade2",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10109 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room368",
		"north"     : "/open/clan/13_luck/room/room101",
	]) );
	set( "long", @LONG

    你，自诩为名铸刀师的后代，却有着超越常人般非凡得宿命，揹
负着历代祖先所未完成的重大使命，有异于现实洪流里沉重的身躯，
心却在狂想空间中四处游荡，找到一些可靠的伙伴共组十三吉祥，只
为了找寻先祖遗失在无穷黑暗魔道中唯一的一把妖刀。

LONG);
	setup();
	replace_program(ROOM);
}
