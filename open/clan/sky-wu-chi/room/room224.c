inherit ROOM;
void create() {
	set( "short", "$HIW$猫王座$NOR$" );
	set( "owner", "timekiller" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 1,
		"file7"    : "/open/killer/headkill/obj/e_dag",
		"file1"    : "/open/killer/headkill/obj/f_dag",
		"file5"    : "/open/killer/obj/k_ring",
		"amount2"  : 1,
		"file6"    : "/obj/gift/xiandan",
		"file10"   : "/open/port/obj/wolf_ring",
		"amount8"  : 1,
		"file3"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"file2"    : "/open/killer/headkill/obj/i_dag",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room242",
	]) );
	set( "build", 11295 );
	set( "long", @LONG
哈哈！！你来到这里只是狂笑........
笑死伦！！.....就凭$HIC$霹雳猫$NOR$这小伙子，
也想在这天道无极帮里，偷盖个小王座....
奇怪的是，正想扁他时竟看不到霹雳猫本人，
切，原来他躲在王座后面睡觉，真$RED$猪$NOR$!!
嘿嘿，赶快 $HIW$ＳＭ$NOR$ 他吧!!  

LONG);
	setup();
	replace_program(ROOM);
}
