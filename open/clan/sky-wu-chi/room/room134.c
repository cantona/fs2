inherit ROOM;
void create() {
	set( "short", "美妃的卧室" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount10" : 1,
		"amount7"  : 1,
		"file1"    : "/daemon/class/fighter/ywhand",
		"file10"   : "/daemon/class/fighter/armband",
		"file6"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "light_up", 1 );
	set( "owner", "ywarter" );
	set( "build", 12000 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room136",
	]) );
	set( "long", @LONG
这里是空瓶子的夫人[1;37m‘[1;35m美妃[1;37m’[0m的卧室，当你一走进这里时你就感受
一种只有奇特女子才有的香味，那一种香味并不是很重很重的那种香味
而是一种自然的体香，因为人们又叫她为‘香妃’。且又因为她是使用
刀的专家，所以人们又也叫他[1;37m‘[1;36m绝魂刀姬[1;37m’[0m，他有一把上古名器，此刀
开鞘后一定要见血。这把刀就是[1;37m‘[1;33m太皇刀─[1;34m蓝牙[1;37m’[0m而这把刀一定要美
妃才能使用的得心应手。这也难怪了，因为这把刀是有灵性的，只跟随
她的主人，而它的主人就是美妃。

LONG);
	setup();
	replace_program(ROOM);
}
