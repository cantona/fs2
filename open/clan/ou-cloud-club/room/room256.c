inherit ROOM;
void create() {
	set( "short", "$HIR$小红帽$NOR$" );
	set( "object", ([
		"file9"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/open/port/obj/wolf_ring",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"amount9"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
		"file7"    : "/obj/gift/lingzhi",
		"file4"    : "/open/ping/obj/ring-2",
		"file3"    : "/open/ping/obj/cloud",
		"file8"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
	]) );
	set( "build", 14641 );
	set( "light_up", 1 );
	set( "owner", "ripken" );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room241",
	]) );
	set( "long", @LONG
$HIY$傲$HIC$云$NOR$山庄内大量存有魔界守护神兽的鳞甲，此乃圣
火教之$HIY$ζ$HIW$天焰武神$HIY$ζ$NOR$「$HIR$舍身入魔$NOR$”$HIC$冰焰$NOR$单凭一人之力力
挑魔界神兽$HIY$黄金甲龙$NOR$后从甲龙身上所得的龙鳞甲，据闻
此$HIY$魔龙鳞$NOR$具有通往魔界某处之效．

LONG);
	setup();
	replace_program(ROOM);
}
