inherit ROOM;
void create() {
	set( "short", "最终宝库" );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/hall",
		"enter"     : "/open/clan/hell/room/room94",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里是小敏藏他私房宝物的地方,平常其他人是绝对进不来的,这里有小敏急用
的pill,eq,和一些必须物品,若是真的有需要,请洽小敏本人,他绝对会乐于拿出来
和大家分享的,房间门口贴着一各大牌子,非请莫入,有一只小狐狸在这里看守着

LONG);
	setup();
	replace_program(ROOM);
}
