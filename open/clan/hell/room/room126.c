inherit ROOM;
void create() {
	set( "short", "小笨蛋的客厅" );
	set( "object", ([
		"file3"    : "/open/main/obj/firesword",
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/magic-manor/obj/magic-sign",
		"file1"    : "/open/killer/obj/s_pill",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 373,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
	]) );
	set( "owner", "acelan" );
	set( "build", 11029 );
	set( "item_desc", ([
		"叮叮" : @ITEM
一只白色带有点金毛的波斯和金吉拉混种的可爱喵咪
最爱趴在角落睡觉，醒来时爱追着用纸揉成的球跑来跑去
是一只超级可爱的小猫咪喔 ^_^
ITEM,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room127",
		"west"      : "/open/clan/hell/room/room125",
	]) );
	set( "long", @LONG
小笨蛋的客厅看来不像房间，倒像是个椭圆广场，周围环绕着异
常而强烈的气流，将在广场内的所有物品都托了起来。不过四周都空
荡荡的，看起来好荒凉的样子，真看不出来着个客厅要如何来接待客
人。在角落趴着一只猫咪，是小笨蛋的爱猫(叮叮)...
LONG);
	setup();
	replace_program(ROOM);
}
