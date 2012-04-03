inherit ROOM;
void create() {
	set( "short", "$HIY$珠光宝气$NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/killer/obj/kill_yar_head",
		"file2"    : "/open/killer/obj/kill_yar_head",
		"amount8"  : 1,
		"file6"    : "/open/killer/obj/kill_yar_head",
		"file3"    : "/open/killer/obj/kill_yar_head",
		"amount6"  : 1,
		"file1"    : "/open/killer/obj/kill_yar_head",
		"amount7"  : 1,
		"file8"    : "/open/killer/obj/kill_yar_head",
	]) );
	set( "build", 10594 );
	set( "light_up", 1 );
	set( "exits", ([
		"gold"      : "/open/clan/hell/room/room64",
		"green"     : "/open/clan/hell/room/room17.c",
		"out"       : "/open/clan/hell/room/room28.c",
		"blue"      : "/open/clan/hell/room/room11.c",
		"red"       : "/open/clan/hell/room/room66.c",
	]) );
	set( "long", @LONG
一踏入这间房间,发现墙壁上四处都镶着各种颜色的宝石,仔细一看,原
来都是有神奇能力的戒指上面所镶的宝石,有$HIG$绿色$NOR$的杀意魔戒,$HIC$蓝色$NOR$的冰雪神
戒,$HIR$红色$NOR$的红宝石指戒,当然还有$HIY$金色$NOR$的护卫戒指,这里有不同的门,分别通
往存放不同戒指的地方.

LONG);
	setup();
	replace_program(ROOM);
}
