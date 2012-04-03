inherit ROOM;
void create() {
	set( "short", "小青房外庭园" );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"amount9"  : 15,
		"amount1"  : 1,
		"file8"    : "/open/killer/headkill/obj/w_dag",
		"file5"    : "/open/port/obj/wolf_ring",
		"file1"    : "/open/gsword/obj/yuskirt",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"amount2"  : 1,
		"file3"    : "/open/killer/headkill/obj/i_dag",
		"amount8"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/killer/headkill/obj/world_dag",
		"file9"    : "/open/killer/obj/black",
	]) );
	set( "build", 10060 );
	set( "owner", "miffy" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room76",
		"west"      : "/open/clan/sky-wu-chi/room/room212",
	]) );
	set( "long", @LONG
这里是一个很纯朴的农家庭园打扮,你看到三步五时就有些村妇会
在这里走在来走,所以你压根都不会发现原来这里住了一个世外高人
但是你不知道,原来里面正是住着一个传奇的人物,她善常用刀,因
为她现在有事情要外出,所以你也就找不到她的人影了,看看着庭园
外的景色真是怡人ㄚ,依山傍水的,正是个清修的好环境,你不自觉的
也就响往了起来,也希望过着这样子的生活...

LONG);
	setup();
	replace_program(ROOM);
}
