inherit ROOM;
void create() {
	set( "short", "龙窟" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room209",
		"down"      : "/open/clan/13_luck/room/room211",
	]) );
	set( "long", @LONG

　　经历过无数的战斗你终于来到了‘龙窟’，此地正是尘界九龙中
的龙骨－万烛公，他身后的阶梯看来就是维一的通道了，眼看四周有
这不少骸骨，看来已有不少人死在此地了，不知道你是否有能力打败
万烛公，继续往前进，还是会成为下一个亡魂。

LONG);
	setup();
	replace_program(ROOM);
}
