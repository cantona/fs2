inherit ROOM;
void create() {
	set( "short", "$HIC$次元缝隙$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/capital/obj/blade2",
		"file2"    : "/open/capital/obj/blade2",
	]) );
	set( "light_up", 1 );
	set( "build", 13307 );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/hall.c",
		"north"     : "/open/clan/ou-cloud-club/room/room163",
	]) );
	set( "long", @LONG

    一踏入此地,你感到空间骤然颠倒错乱,时间竟似海水般潮起潮落,维持
世界的定律仿佛于刹那间失去了一切秩序,星辰稀稀落落的在黑暗穹苍中忽
明忽灭,这边应该就是世界的边缘了吧,若你对于神的存在还感到一丝敬畏,
那么最好赶快回头离开此地吧,擅闯神的领域可不是什么有趣的事.

LONG);
	setup();
	replace_program(ROOM);
}
