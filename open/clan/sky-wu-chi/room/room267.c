inherit ROOM;
void create() {
	set( "short", "妮可的窝" );
	set( "owner", "necker" );
	set( "build", 10434 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
一把椅子放在这间屋子的正中央
而上面并不是一个人坐着...反倒是放了一把弓
你心生好奇想要上去拿那一把弓...看看那是把什么弓...
当你走近一瞧才发现那是把白铁弓
心想这把烂弓居然还有人在用...此时突然有数十把箭朝你飞了过来...
原来这把弓只是个幌子...那不过是暗器的机关罢了...
LONG);
	setup();
	replace_program(ROOM);
}
