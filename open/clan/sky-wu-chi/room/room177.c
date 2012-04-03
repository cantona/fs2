inherit ROOM;
void create() {
        set( "short", "碎石小路91" );
        set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room14",
		"north"     : "/open/clan/sky-wu-chi/room/hall.c",
		"west"      : "/open/clan/sky-wu-chi/room/room178.c",
        ]) );
        set( "long", @LONG
北方是众所皆知的天极殿，西方则是雄伟豪放的镇
天西门，往天极殿的路程虽不长，但却也是一个鸟鸣常
叫的美好地方。路旁的树丛有着许许多多的可爱动物，
活泼的向你讨食物呢！看来并不只有天道无极的帮众们
喜爱这里了。


LONG);
        setup();
        replace_program(ROOM);
}

