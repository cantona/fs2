inherit ROOM;
void create() {
	set( "short", "$HIC$【$NOR$秘密东西$HIC$】$NOR$小新" );
	set( "owner", "mudu" );
	set( "light_up", 1 );
	set( "build", 10144 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room24.c",
	]) );
	set( "long", @LONG
这里是小新在以前到现在的所有战役中所拿到的宝贵
物品，更显出小新平常有在收集东西的习惯，只要是难得
一见的东西，更是要放在这，里面的东西虽然平常是用不
太到，但如果有事的话，相信这里面的东西一定能派上用
场，因此这里的重要性更是大大的提升。

LONG);
	setup();
	replace_program(ROOM);
}
