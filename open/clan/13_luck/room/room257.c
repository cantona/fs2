inherit ROOM;
void create() {
	set( "short", "‘桃云小筑’ " );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room258",
	]) );
	set( "long", @LONG
走进桃云小筑里，看到了居住在这边的两位隐士，没有想到住在这里的
这两位隐士，竟然是这么的年轻，你也很佩服他们两位，可以看破江湖上面
的恩恩怨怨，独自的隐居在这片无人的桃花林里。看起来那两位隐士，好像
是一对夫妻，让人感觉起来鹣鲽情深。
隐士 崔枫(Sue fo)
隐士 冷芸(Le yu)
LONG);
	setup();
	replace_program(ROOM);
}
