inherit ROOM;
void create() {
	set( "short", "小二禁地" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 1,
		"amount1"  : 219,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/ping/obj/poison_pill",
		"amount7"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/daemon/class/fighter/armband",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 3,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/dancer/obj/yuawaist",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/daemon/class/blademan/obj/shield",
	]) );
	set( "build", 10072 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room53.c",
		"enter"     : "/open/clan/13_luck/room/room126",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

这里是小二摆防具的地方
看起来好像有一些奇怪的地方
ㄟ....
你看到墙角...
那里居然摆着diamond eq...
这...
你开始怀疑小二怎可能打的到
大概是他花了很多钱去跟人家买的吧
不过
还有一些 force eq...
如果需要的话
可以问一下小二
他应该会借你..
如果他没有再发呆的话

LONG);
	setup();
	replace_program(ROOM);
}
