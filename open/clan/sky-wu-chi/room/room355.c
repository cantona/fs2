inherit ROOM;
void create() {
	set( "short", "藏经阁" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/open/gblade/obj/blade-book",
		"file1"    : "/open/gsword/obj/sword_book",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/ping/obj/sunforce_book",
		"amount5"  : 1,
		"file2"    : "/open/marksman/obj/book",
		"file9"    : "/open/doctor/obj/curebook",
		"file5"    : "/open/snow/obj/book",
		"file7"    : "/open/capital/obj/stabber_book",
		"file4"    : "/open/gblade/obj/book",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/poison/obj/pbasebook",
		"amount7"  : 1,
	]) );
	set( "build", 15777 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room278.c",
		"west"      : "/open/clan/sky-wu-chi/room/room356",
	]) );
	set( "long", @LONG
这是好学不倦的机器人一号最喜爱来的地方
由于他了解想要出人头地就必须好好努力读书
因此他不惜重金,不顾危险到处去收集他认为有价值的书
但他与众不同的眼光
让人发现其时这里还是垃圾场
到处放着令人不屑一看的书籍
这时你突然觉得机器人一号的前途黯淡无光
LONG);
	setup();
	replace_program(ROOM);
}
