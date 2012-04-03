inherit ROOM;
void create() {
	set( "short", "防具房间" );
	set( "owner", "puffy" );
	set( "object", ([
		"file10"   : "/open/magic-manor/obj/water-ball",
		"amount2"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file3"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount6"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"amount1"  : 1,
	]) );
	set( "build", 10830 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room162",
	]) );
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
