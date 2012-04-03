inherit ROOM;
void create() {
	set( "short", "迷雾之道" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount9"  : 1,
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"amount8"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount10" : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
	]) );
	set( "owner", "smalloo" );
	set( "build", 10653 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room335",
		"north"     : "/open/clan/13_luck/room/room337",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    阴风阵阵，送来了一团团的[0;1m□[1mg[1m□[1m□[0m，使得路径变得愈来愈[33m迷糊[0m。使
你突然惊吓了一跳，你皱一皱[0;1;30m□[1m□[1m□[1mY[0m，急忙的看清楚了道路，急急忙忙
的往正确的路途冲去。神风之真是让人感觉□[0;1;5;34mo[1;5m□[1;5mS[1;5m□[1;5m_[1;5m□[1;5mS[1;5m□[1;5m□[1;5m□[1;5m□[0m的地方，你
一时也不明白其中的秘奥所在，此时厚厚黑黑的云层吹过来，压得你
喘不过气来，连忙[0;1;33m□[1mB[1m□[1m\[0m自保。


LONG);
	setup();
	replace_program(ROOM);
}
