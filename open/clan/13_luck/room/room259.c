inherit ROOM;
void create() {
	set( "short", "‘石板路’ " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room260.c",
		"south"     : "/open/clan/13_luck/room/room258",
	]) );
	set( "long", @LONG
走出了桃花林之后，才发觉刚刚的桃花林只是吓唬人的，并不是故意要制造
迷宫来阻挡陌生人的进出，那只是住在「桃云小筑”里的主人要吓唬吓唬入侵者
而已。听说住在这片桃花林的是两个隐士，平常不太在意江湖上的事情，而刚刚
那片桃花林就是居住在这里的隐士所布下的阵局，目的也只是喝止随随便便的入
侵者而已，而并没有要伤害人的心。
LONG);
	setup();
	replace_program(ROOM);
}
