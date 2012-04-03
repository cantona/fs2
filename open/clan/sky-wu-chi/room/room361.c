inherit ROOM;
void create() {
	set( "short", "寒霜居-化劫之间" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
	]) );
	set( "light_up", 1 );
	set( "owner", "roboo" );
	set( "build", 10717 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room358",
	]) );
	set( "long", @LONG
　　当你推开大门时，你瞬间处在一片漆黑的环境中，伸手不见五指
，在这种情况下你决定将眼睛闭起来，静静的感受这房间所带给你的
感觉。渐渐地，你慢慢被一种莫名的感觉给包围了起来，等你将眼睛
张开的时候，你看到的不再是一片的漆黑，取而代之的是被一整片星
辰所包围的空间。在这片空间的正中央飘浮着10只颜色完全不同菱形
水晶，你看到这种异像，便了解原来这十只菱形水晶一定是在武林中
失传已久的浑天心法，而其中更有足以独霸武林的武学招式。

　　　　　白云烟　玫荡霞　土昆仑　碧雪冰　紫星河　

　　　　　玄混沌　靛沧海　金晨曦　血穹苍　玄宇宙
LONG);
	setup();
	replace_program(ROOM);
}
