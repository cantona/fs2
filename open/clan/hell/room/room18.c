inherit ROOM;
void create() {
	set( "short", "min的私房菜" );
	set( "owner", "neun" );
	set( "object", ([
		"amount8"  : 69,
		"file9"    : "/open/mogi/castle/obj/sspill",
		"file6"    : "/open/fire-hole/obj/w-pill",
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
		"file7"    : "/open/fire-hole/obj/r-pill",
		"amount6"  : 5,
		"amount4"  : 1,
		"amount9"  : 47,
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 400,
		"amount7"  : 48,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "light_up", 1 );
	set( "build", 10656 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room119",
		"north"     : "/open/clan/hell/room/room120.c",
		"west"      : "/open/clan/hell/room/room9",
	]) );
	set( "long", @LONG

这里是小敏藏私房东西的地方,一般人员禁止进入,尤其是符合下面条件任一项的
若被小敏发现,一定会Sm一万次,还要请小敏吃10顿饭已做补偿

    1.$HIY$最爱小护士的人$NOR$
    2.$HIY$电脑里有A片的人$NOR$
    3.$HIY$要考研究所的人$NOR$
    4.$HIY$抽烟的人$NOR$
    5.$HIY$龟毛的人$NOR$
    6.$HIY$处女座的人$NOR$
    7.$HIY$狗屎的人$NOR$

以上人员发现进入 随即cjail           2002.1.2 min
            
LONG);
	setup();
	replace_program(ROOM);
}
