inherit ROOM;
void create() {
	set( "short", "$HIB$养$HIC$剑$CYN$谷$NOR$" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file2"    : "/open/wind-rain/obj/bird-blade",
		"amount9"  : 1,
		"file3"    : "/open/gsword/obj/dragon-sword",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount7"  : 1,
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10084 );
	set( "owner", "zaa" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG
    这是由$HIR$剑$NOR$所构成的$HIC$山谷$NOR$,望眼看去唯有$RED$无数的剑$NOR$放在
此地,仿佛是个$MAG$剑之宝库$NOR$,正是武林中人梦寐以求的$CYN$宝地$NOR$,其中
最引人注目的是谷正中放置的一把$HIC$玄兵$NOR$,名为-$HBCYN$￠傲世间￠$NOR$充满
主人的$MAG$霸气$NOR$,令人不敢注目只得快快离去以免$HIR$发生不测!$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
