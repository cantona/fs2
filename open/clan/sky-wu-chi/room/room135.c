inherit ROOM;
void create() {
	set( "short", "青儿卧房" );
	set( "light_up", 1 );
	set( "object", ([
		"file1"    : "/open/magic-manor/obj/fire-ball",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/magic-manor/obj/wood-ball",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"amount8"  : 1,
		"amount10" : 1,
		"amount5"  : 1,
		"file3"    : "/open/capital/guard/gring",
		"file10"   : "/open/magic-manor/obj/soil-ball",
		"file4"    : "/open/capital/guard/gring",
		"amount4"  : 1,
	]) );
	set( "owner", "ywarter" );
	set( "build", 12000 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room136",
	]) );
	set( "long", @LONG
这里是空瓶子的夫人[1;37m‘[1;36m青儿[1;37m’[0m的卧室，当你一走进这里时你闻到了
一股清淡的紫罗蓝香味，在其卧室中间有一红木的木雕圆桌，上面放着
一把看似有好长一段历史的古筝，你拨了一拨筝弦，发出了一阵铿的声
音，你顿时觉得那真是一把好琴ㄚ，在看看其墙上挂有一把[1;37m‘[1;34m寒苍弓[1;37m’[0m
似也像有灵性般的发出冰冷的光线。整间房间里头有一些花花草草都好
像是你完全没见过的一样，让你感到惊讶万分。此时你的心里头想着空
瓶子的夫人看来也是万中选一的好女子。

LONG);
	setup();
	replace_program(ROOM);
}
