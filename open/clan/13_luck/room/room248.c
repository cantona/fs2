inherit ROOM;
void create() {
	set( "short", "‘石板小路’" );
	set( "light_up", 1 );
	set( "owner", "poll" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room249",
	]) );
	set( "long", @LONG
爬到了山顶上面来，你虽然很累，可是内功调息过后却感觉舒服多了。
在这平静的时刻，往四方望去，只见大地踩在你脚底下，让你的心胸开阔了
许多，使得你原本的雄心壮志，更加的坚定了。而在你旁边有个浪人，看起
来似乎不怎么样，你想他也是来这边看风景的吧。往东边看过去，东边有个
凉亭，而来这边游玩的人都会在那个凉亭休憩一下，让自己的精神回复。
LONG);
	setup();
	replace_program(ROOM);
}
