inherit ROOM;
void create() {
	set( "short", "寒霜居" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
	]) );
	set( "owner", "roboo" );
	set( "build", 10635 );
	set( "light_up", 1 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room359.c",
		"north"     : "/open/clan/sky-wu-chi/room/room358",
		"west"      : "/open/clan/sky-wu-chi/room/room360.c",
	]) );
	set( "long", @LONG
当你走进这房间的时候，突然被一阵强光照射的无法睁开眼睛
等你适应了这阵强光之后，才发觉原来这强光的来源是源自于
这房间墙壁上的水晶。你仔细一看这房间几乎都是由十种不同
颜色的水晶所构成的，难道这墙上的水晶就是传说中记载武林
绝学《浑天心法》口诀的十色水晶吗！想必这房间的主人必定
是位再世高人啊~~~.

LONG);
	setup();
	replace_program(ROOM);
}
