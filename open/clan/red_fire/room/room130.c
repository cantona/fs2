inherit ROOM;
void create() {
	set( "short", "$HIC$【$YEL$黄土$HIW$路$HIC$】$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room129",
		"north"     : "/open/clan/red_fire/room/room131",
	]) );
	set( "long", @LONG
雨天过后，你走到一条满地$YEL$泥泞$NOR$的野外$HIW$小路$NOR$，顿时心中感到一阵不悦
，但是你的$HIR$冒险$HIM$精神$NOR$依然使你继续向前迈进；可是你却发觉真的是寸步难
行，心中泛起了一股想往回走的念头，但是想一想已经来到这里，还是$HIC$咬
紧$HIW$牙根$NOR$往前进吧....。


LONG);
	setup();
	replace_program(ROOM);
}
