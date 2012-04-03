inherit ROOM;
void create() {
	set( "short", "如梦似幻" );
	set( "object", ([
		"amount2"  : 1,
		"file6"    : "/obj/gift/hobowdan",
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/capital/obj/blade2",
		"file1"    : "/obj/gift/lingzhi",
		"file7"    : "/open/poison/obj/blue_key",
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
	]) );
	set( "owner", "roboo" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room206",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "long", @LONG
你恍若进入一个[36m飘渺虚无[0m的空间,只觉得快要[31m无法呼吸[0m,你感觉有双
眼睛正在盯着你看,但是你环顾四周,并没有任何东西存在,忽然你身形
落空,往下[35m墬落[0m,正当你快要跌落地面之时,你忽然[33m惊醒[0m!发现刚才的一切
只是[37m幻觉[0m,让你觉得松了一口气.

LONG);
	setup();
	replace_program(ROOM);
}
