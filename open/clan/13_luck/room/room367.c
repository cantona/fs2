inherit ROOM;
void create() {
	set( "short", "秘密训练埸 - " );
	set( "object", ([
		"file4"    : "/open/badman/obj/badhelmet",
		"amount1"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"file2"    : "/open/doctor/pill/human_pill",
		"amount2"  : 32,
		"amount4"  : 1,
	]) );
	set( "owner", "dancer" );
	set( "build", 10140 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room119",
	]) );
	set( "long", @LONG
这里就是鼎鼎有名的湖心小筑的夜梦宫所有人的训练埸所，能加入这里修业的
精英分子都是通过严苛的考验的湖心小筑的高深隐士。能成为湖心小筑的高深
隐士的一份子是所有湖心小筑的隐士梦寐以求的殊荣。墙上有一张公告(sign)，
来提醒高深隐士如何使用这个练习场。
LONG);
	setup();
	replace_program(ROOM);
}
