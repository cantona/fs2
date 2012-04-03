inherit ROOM;
void create() {
	set( "short", "$HIY$妖$HIW$幻$HIY$空间$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"claw"      : "/open/clan/ou-cloud-club/room/room157",
		"helmet"    : "/open/clan/ou-cloud-club/room/room204.c",
		"cloak"     : "/open/clan/ou-cloud-club/room/room161.c",
		"out"       : "/open/clan/ou-cloud-club/room/room156.c",
		"legging"   : "/open/clan/ou-cloud-club/room/room160",
	]) );
	set( "long", @LONG
一股浓烈无以形容的味道袭向你，四周的空间变的诡异，不似是
正常的空间，这里正是千年树妖所制造出来的空间，平时的树妖正是
处在此地，一向不喜欢人类的牠，最痛恨人类无故来打扰他平静的生
活了，如果有人擅闯，将会被千年树妖无情的攻击。

LONG);
	setup();
	replace_program(ROOM);
}
