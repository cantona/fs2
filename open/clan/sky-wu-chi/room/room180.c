inherit ROOM;
void create() {
	set( "short", "$HIB$邪月正厅$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room182.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/room178.c",
	]) );
	set( "long", @LONG
走到这,突然你停止了脚步,对于邪月正厅,你不禁啧啧称奇了起来
整间正厅用了邪月水晶打造而成,所以,浮现着轻蓝色的光芒....
闪耀的水晶正闪闪发亮着,使你眼睛因光芒而渐渐失去感觉,模糊中
只见几个大字....[0;1;5;34m□[1;5m□[1;5m~[1;5m~[1;5m~[1;5m□[1;5m□[1;5m~[1;5m~[1;5m~[1;5m□[1;5m□[1;5m~[1;5m~[1;5m~[1;5m□[1;5mU[0m
LONG);
	setup();
	replace_program(ROOM);
}
