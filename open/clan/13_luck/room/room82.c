inherit ROOM;
void create() {
	set( "short", "小刘的狗屋" );
	set( "owner", "pity" );
	set( "object", ([
		"file1"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10074 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room55",
	]) );
	set( "long", @LONG
刚进来就有一个冲动想溜Q.Q
怀疑是不是跑错房间,也许这就是传说中的'鬼不理狗屋'
但是正这么想时却看到旁边辛苦在画战版的小刘@@~才想到这真的是真正的鬼不理狗屋
四周有一堆柜子,仔细一看,蜡笔啦.连笔削也没扫,天ㄚ~连浑天水晶也干过来放~真是比贱狗还还剑还来的滥
真是有够OOXX的伦~也许活到现在也快成化石了
LONG);
	setup();
	replace_program(ROOM);
}
