inherit ROOM;
void create() {
	set( "short", "‘桃筑门口’" );
	set( "owner", "joy" );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room257",
		"north"     : "/open/clan/13_luck/room/room259.c",
	]) );
	set( "long", @LONG
走到桃云小筑的门口，看到四周绿油油的一片绿意，不由得佩服起隐居的两
位居士。四面自给自足的农地，不禁想到有句诗是这样讲的∶「锄禾日当午，汗
滴禾下土；谁知盘中飧，粒粒皆辛苦。”想到这里，你不由得升起感激的心理，
真想快点进到桃云小筑里面看看是哪两位居士在此居住。
LONG);
	setup();
	replace_program(ROOM);
}
