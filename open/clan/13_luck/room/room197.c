inherit ROOM;
void create() {
	set( "short", "吉祥花园" );
	set( "build", 10209 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room4",
	]) );
	set( "long", @LONG

    这儿是黄城大道旁的吉祥花园，从这放眼过去一大片的花花草草，
平常时可以看到一些公主或是宫女在这赏花嬉戏，蝴蝶蜜蜂相互争艳，
许多闻香而来的达官贵人，不免心花怒放，看着只穿一件薄纱隐隐约约
可以看见里面只穿着小可爱的少女们，惹的远观的人心理养养的。

LONG);
	setup();
	replace_program(ROOM);
}
