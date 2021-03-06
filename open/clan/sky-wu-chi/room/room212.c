inherit ROOM;
void create() {
	set( "short", "miffy 房里" );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "object", ([
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/daemon/class/fighter/ywhand",
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"amount1"  : 82,
		"amount2"  : 1000,
		"file2"    : "/open/killer/obj/s_pill",
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file7"    : "/daemon/class/fighter/armband",
	]) );
	set( "build", 10010 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room213.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room318",
	]) );
	set( "long", @LONG
在这里可以看到这个房间的主人,也就是刀姬小青..能看到她
是你这辈子最荣幸的事,因为他不一定是你想见就可以见到的人
这几天,他为了一些事正出去寻找失落的花瓶,你可以看到里面
是一个很朴素的房间,并没有太大的奢华气息,但是你却感觉
有一股自然的杀气存在,这代表着刀姬小青的杀气还留在
里面所导致的结果,你在里面不安的坐着等小青的到来,心里也恍
恍不安...

LONG);
	setup();
	replace_program(ROOM);
}
