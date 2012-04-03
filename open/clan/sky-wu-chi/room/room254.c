inherit ROOM;
void create() {
	set( "short", "早安少女组" );
	set( "owner", "xraistlin" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/killer/obj/k_ring",
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
	]) );
	set( "build", 10704 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room240",
	]) );
	set( "long", @LONG
早安少女
[1;32m吉泽瞳[0m
1985/4/12/O型/琦玉县出生
[1;35m加护亚依[0m
1988/2/7/AB型/奈良县出生
[1;36m过希美[0m
1987/6/17/O型/东京都出生
[1;31m矢口真里[0m
1983/1/20/A型/神奈川县出生
这四个是我觉得最可爱的
LONG);
	setup();
	replace_program(ROOM);
}
