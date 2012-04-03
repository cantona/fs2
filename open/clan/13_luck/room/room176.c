inherit ROOM;
void create() {
	set( "short", "古堡" );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/mogi/castle/obj/fire-king-head",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"amount3"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mogi/castle/obj/fire-king-head",
		"amount8"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
	]) );
	set( "build", 10212 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room179",
	]) );
	set( "long", @LONG

    这里是传说中的魔界之主[0;1;31m□[1mI[1m□[1m□[1m□[1m][1m□[1m□[0m的所在地古堡，里面有许
多的机关，也有许多厉害的部下镇守着各关卡，[0;1;36m□[1mC[1m□[1m][1m□[1mN[0m和[0;1;37m□[1m□[1m□[1m□[1m□[1m□[0m
[0;1;37m□[1m□[0m更是其中的佼佼者，也许能侥幸打败这些人，但是[0;1;31m□[1mI[1m□[1m□[1m□[1m][1m□[1m□[0m却
比他们不知变态几倍，以[0;1;35m□[1m□[1m□[1m□[1m□[1mT[1m□[1mx[0m打遍天下无敌手，要挑战他要
有见小黑小白的心理准备，如果你已经准备好了，那就推开大门
进去吧。


LONG);
	setup();
	replace_program(ROOM);
}
