inherit ROOM;
void create() {
	set( "short", "沙滩" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room144",
		"west"      : "/open/clan/hell/room/room142.c",
	]) );
	set( "long", @LONG
越过岩石的那一边到此,发现当初触礁时的运气真不是普通的差,此地已经完
全看不到岩石的影子,而是满地平软洁白的沙粒,潮退的痕迹清楚的印在沙上形成
一道美丽的弧线,沙岸的北边似乎有一片防风林,看来不是很容易穿越,往东下去
也是沙岸,东北面更好像隐隐有几道炊烟在空中飘缈.

LONG);
	setup();
	replace_program(ROOM);
}
