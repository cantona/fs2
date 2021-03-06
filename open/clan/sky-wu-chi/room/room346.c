inherit ROOM;
void create() {
	set( "short", "小雪滴房间" );
	set( "owner", "sca" );
	set( "object", ([
		"amount3"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/port/obj/wolf_ring",
		"file3"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10005 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room87",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
高耸的山势至此直转而下，一抹清渠随着坡道奔向
前方，顺着山势往下流去。两旁的坡道上长满了野生的
杏花，映着阳光，如喷花蒸雾一般，攀藤抚树而下，只
见水上落花越多，其水越清澈，往前直走，水识越快，
耳旁隐隐听到万马奔腾的声音。

LONG);
	setup();
	replace_program(ROOM);
}
