inherit ROOM;
void create() {
	set( "short", "$HIC$【$HIW$武器室$HIC$】$NOR$龙魔人 " );
	set( "owner", "conpse" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/daemon/class/blademan/obj/iceblade",
		"file5"    : "/open/mogi/mountain/obj/frog-pill",
		"amount4"  : 1,
		"amount5"  : 4,
		"amount9"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"file7"    : "/obj/gift/xiandan",
		"amount3"  : 1,
		"amount2"  : 4,
		"amount1"  : 1,
		"file10"   : "/daemon/class/blademan/obj/six-neck",
		"amount6"  : 1,
		"amount7"  : 1,
		"file2"    : "/open/mogi/dragon/obj/power",
		"amount8"  : 1,
		"file1"    : "/daemon/class/fighter/armband",
		"file4"    : "/obj/gift/lingzhi",
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room154",
	]) );
	set( "build", 10050 );
	set( "long", @LONG
这里是小弟我放东西的地方，看起来似乎很杂乱
可是又是那么的乱中有序，平常可能不常上线，所以
这里都是空空的，不过为了早日成为一流的刀客，我
还是会努力的，平常到这里时记得上面所写的，给在
玩的自已，龙魔人留。

LONG);
	setup();
	replace_program(ROOM);
}
