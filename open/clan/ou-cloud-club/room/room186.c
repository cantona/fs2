inherit ROOM;
void create() {
	set( "short", "$HIY$金织手套$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount8"  : 1,
		"file1"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
	]) );
	set( "owner", "bbsboss" );
	set( "light_up", 1 );
	set( "build", 12060 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room188",
		"west"      : "/open/clan/ou-cloud-club/room/room187",
	]) );
	set( "long", @LONG
         $HIR$以金丝织成的珍贵手套，其中似乎隐藏着某种魔力$NOR$



$WHT$跳跃闪躲之术(dodge)            技能效应： 3$NOR$


走到这边...你已经看到了许多的珍贵防具
别以为这样子就结束...后头还很多呢..
看来风林山寨的二寨主也惨遭毒手了...连随身的金织手套也被夺
LONG);
	setup();
	replace_program(ROOM);
}
