inherit ROOM;
void create() {
	set( "short", "$HIW$黑轮卧房 - $HIC$藏宝室$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file8"    : "/obj/gift/hobowdan",
		"amount10" : 1,
		"file10"   : "/open/mogi/dragon/obj/key",
		"amount1"  : 1,
		"file1"    : "/open/snow/obj/snow_token",
		"amount9"  : 1,
		"file6"    : "/obj/gift/unknowdan",
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/snow/obj/sky_lin_stone",
		"file9"    : "/open/mogi/dragon/obj/key",
		"file7"    : "/obj/gift/xiandan",
		"file5"    : "/open/scholar/obj/iron",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/mogi/castle/obj/blood-water",
	]) );
	set( "item_desc", ([
		"osword" : @ITEM





[0;1;36m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1;37m□[1mu[1m□[1m@[1m□[1m□[0m


ITEM,
		"oblade" : @ITEM



[0;1;36m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1;37m□[1mu[1m□[1m@[1m□[1m□[0m


ITEM,
	]) );
	set( "build", 10088 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room41.c",
		"south"     : "/open/clan/hell/room/room53",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
此房为黑轮平时从武林中，获得的希世珍
宝，或是仙丹妙药，所置放的地方，你想上前
一览这些希室珍宝，不料却跑出了两个首位阻
挡．

[0;1m□[1m□[1m□[1m□[1m□[1mu[1m□[1m@[1m□[1m□[0m「[0;1;37m□[1m@[1m□[1m□[1m□[1m□[1m□[1mM[1;33m□[1m□[1m□[1m□[1m□[1mM[0m”一刀万杀(oblade)
[0;1m□[1m□[1m□[1m□[1m□[1mu[1m□[1m@[1m□[1m□[0m「[0;1;33m□[1m@[1m□[1m□[1m□[1m□[1m□[1mC[1;37m□[1m□[1m□[1m□[1m□[1mC[0m”一剑万生(osword)

LONG);
	setup();
	replace_program(ROOM);
}
