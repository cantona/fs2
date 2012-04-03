inherit ROOM;
void create() {
	set( "short", "$HIW$封印之城 $WHT$夜$HIR$梦$HIC$天$HIY$蚕$HIG$变$NOR$" );
	set( "build", 10047 );
	set( "light_up", 1 );
	set( "object", ([
		"amount5"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"file5"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"amount10" : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
	]) );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room158",
	]) );
	set( "long", @LONG

    几许与众不同的细丝垂挂在空中引起你的注意,因为这些不寻常的细丝
除了发出闪闪金光之外,更隐隐泛着一股神圣的仙气,原来这些奇异的物质
源于仙域的千年天蚕,传说得到天[0;1m□[1m□[0m守护的人,将会得到不可思议的力量...

LONG);
	setup();
	replace_program(ROOM);
}
