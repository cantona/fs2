inherit ROOM;
void create() {
	set( "short", "风雁" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room291",
	]) );
	set( "long", @LONG
当你走进这个房间时你突然觉得背后有人似的浑身毛骨悚然
突然你觉得有人正以千里传音和你说话....
顿时你才知道帮主燕仔的惊事修为以达天人
从此无反叛知心...只肯为帮主效命
过了一年后江湖传出了一个新的传说...雪雁一出谁与争锋
LONG);
	setup();
	replace_program(ROOM);
}
