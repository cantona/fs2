inherit ROOM;
void create() {
	set( "short", "龙窟" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room199",
		"down"      : "/open/clan/13_luck/room/room201.c",
	]) );
	set( "long", @LONG

　　经历过无数的战斗你终于来到了‘龙窟’，此地正是尘界九龙中
的龙珠－银羽飞燕，他身后的阶梯看来就是维一的通道了，眼看四周
有这不少骸骨，看来已有不少人死在此地了，不知道你是否有能力打
败银羽飞燕，继续往前进，还是会成为下一个亡魂。

LONG);
	setup();
	replace_program(ROOM);
}
