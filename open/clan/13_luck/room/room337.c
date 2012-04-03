inherit ROOM;
void create() {
	set( "short", "比武道" );
	set( "owner", "smalloo" );
	set( "object", ([
		"amount1"  : 1,
		"file4"    : "/open/killer/headkill/obj/w_dag",
		"file3"    : "/open/killer/headkill/obj/e_dag",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file1"    : "/open/killer/headkill/obj/f_dag",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/i_dag",
		"amount6"  : 1,
		"file6"    : "/open/killer/headkill/obj/f_dag",
	]) );
	set( "build", 10206 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room336",
		"north"     : "/open/clan/13_luck/room/room338",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    你又转了几个弯，三株[0;1;32m□[1mj[1m□[1mQ[1m□[1m□[0m冲天而起，地下又有[0;1;33m□[1m□[1m□[1mD[0m，[0;1;30m□[1m□[1m□[1m□[0m等
矿藏，地气特暖，[0;1;31m□[1m□[1m□[1m□[1m□[1m□[1m□[1m}[0m。你行出数步，隐隐听得树林中传来兵刃
相交之声你有些焦急是前去看，原来是[0;1;34m□[1m□[1m□[1m□[1m□[1m□[0m和[0;1;36m□[1m□[1m□[1m□[1m□[1m□[0m的门徒在互相
[0;1;35m□[1m□[1m□[1mR[1m□[1mZ[1m□[1m□[0m，你看到众多高手在切磋，引起了你好战的心里，你也忍不
住想去一起比试一下。


LONG);
	setup();
	replace_program(ROOM);
}
