inherit ROOM;
void create(){
	set( "owner", "xing" );
    set( "short", "$HIY$幽林小筑$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/new_heaven/room/room4",
        "enter"     : "/open/clan/new_heaven/room/room8",
	]) );
	set( "long", @LONG
清澈的溪水, 茂盛的竹林, 这里就是傲笑红尘所居住的幽林小筑, 
自从他得道之后, 就到了新天堂居住, 并运用本身神力在云上建立了如
此的窝, 平常都会在这里参研更高深的武道, 有时也会下凡, 帮助需要
帮助的人, 斩妖除魔
LONG);
	setup();
	replace_program(ROOM);
}
