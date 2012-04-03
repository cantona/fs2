inherit ROOM;
void create() {
	set( "short", "空瓶子武器室3" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"file2"    : "/obj/gift/lingzhi",
		"file4"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount6"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount8"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"file6"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "owner", "ywarter" );
	set( "build", 10885 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room126",
	]) );
	set( "long", @LONG
你在这里所看到的东西,绝对会让你感到非常的惊讶..因为这些武器
都是非常有名的一些人所拥有的武器,也就是聚灵八杰及树妖等等
有名的大头目所在用的武器
如 凌微云扇飘(lin-cloud-fan)化劫菱归真(hwa-je-icer)
枫映天莲剑(fon-sky-sword)阎匕影螫魂(dark-soul-dagger)
刀斩邪元归(evil-gwe-blade)绝世匕首(world)

LONG);
	setup();
	replace_program(ROOM);
}
