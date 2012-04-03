inherit ROOM;
void create() {
	set( "short", "$HIC$堕$HIG$落$HIY$天$HIR$使$NOR$的$HIM$窝$NOR$" );
	set( "owner", "fsfs" );
	set( "object", ([
		"file4"    : "/open/killer/obj/s_pill",
		"amount10" : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/killer/obj/dagger",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/killer/obj/black",
		"amount3"  : 1,
		"amount4"  : 463,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 30,
	]) );
	set( "light_up", 1 );
	set( "build", 10740 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room162",
		"west"      : "/open/clan/red_fire/room/room85.c",
		"east"      : "/open/clan/red_fire/room/room161",
		"north"     : "/open/clan/red_fire/room/room160",
	]) );
	set( "long", @LONG

        $HIW$﹋﹋﹋※﹋﹋﹋※﹋﹋﹋$HIR$※﹋﹋﹋※$HIW$﹋﹋﹋※﹋﹋﹋※﹋﹋﹋
                       $HIC$刺骨的寒风，刮来片片雪刃

                         风雪中隐隐浮现了血印
        $HIW$﹋﹋﹋※﹋﹋﹋※﹋﹋﹋$HIR$※﹋﹋﹋※$HIW$﹋﹋﹋※﹋﹋﹋※﹋﹋﹋

$NOR$当你一近来的时候就发现这里$HIC$寒风$HIY$刺$HIW$骨$NOR$,
心中突然想到这里难道就是$HIR$堕$HIG$落$HIC$天$HIY$使$NOR$睡觉的地方吗??
心想这家伙真是$HIM$变态$NOR$...
要睡觉不会找舒服一点的地方睡欧...


LONG);
	setup();
	replace_program(ROOM);
}
