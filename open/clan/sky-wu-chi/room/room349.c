inherit ROOM;
void create() {
	set( "short", "小雪球之家" );
	set( "owner", "sca" );
	set( "light_up", 1 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
经过蜿埏的长廊后, 你来到了内房, 往东私乎是某人的卧房, 往东通
往书房, 往南是水云轩。轻罗纱窗外飘着朵朵的白云, 淡淡的翠竹叶
延伸至室内, 清葱的翠绿笼罩着此处, 佳木笼葱, 奇花烂烂, 一带清
流从花木深处泻于石缝之中, 清风微拂, 翠竹摇曳, 藤萝掩映中, 你
的眼皮渐渐感到沉重了。

LONG);
	setup();
	replace_program(ROOM);
}
