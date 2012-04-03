inherit ROOM;
void create() {
	set( "short", "$HIC$次元缝隙$NOR$" );
	set( "owner", "koi" );
	set( "build", 14625 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room156",
		"south"     : "/open/clan/ou-cloud-club/room/room162.c",
	]) );
	set( "long", @LONG

    前方弥漫着些许浓雾,令你看不清四周环境,而此刻身旁的时空只有比
刚刚更加错乱颠倒,这是接近神的境界所引发的种种异象啊,凡人若妄想进
入神的领域,是会遭受天谴的,在浓雾较为稀散之时,你隐约望见前方出现
一座神秘的古城...

LONG);
	setup();
	replace_program(ROOM);
}
