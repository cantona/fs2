inherit ROOM;
void create() {
	set( "short", "$BLU$地道入口$NOR$" );
	set( "light_up", 1 );
	set( "build", 1102 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room29.c",
		"down"      : "/open/clan/hell/room/room87",
		"east"      : "/open/clan/hell/room/room77",
		"north"     : "/open/clan/hell/room/room75.c",
		"west"      : "/open/clan/hell/room/room78.c",
	]) );
	set( "long", @LONG
咻的一声，在你不小心触碰到了外面房间的机关后
不知不觉中飞来到了这里，在这里，看起来阴暗无比，
似忽是在关禁犯人的地方，在你来到这后，便开始向里
面做进一步的蒐寻。不知是否有谁在这个地方。或着是
这里是否藏有什么不可告人的秘密。

LONG);
	setup();
	replace_program(ROOM);
}
