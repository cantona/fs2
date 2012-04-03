inherit ROOM;
void create() {
	set( "short", "$HIR$地狱的诅咒$NOR$(choas belt & gem)" );
	set( "owner", "neun" );
	set( "object", ([
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/obj/bellstar",
		"file1"    : "/open/tendo/obj/luboot",
		"amount1"  : 1,
		"file2"    : "/open/killer/obj/hate_knife",
		"amount6"  : 8000,
		"amount2"  : 287,
		"amount3"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 11791 );
	set( "exits", ([
		"dia"       : "/open/clan/hell/room/room29.c",
		"north"     : "/open/clan/hell/room/room23.c",
	]) );
	set( "long", @LONG
这里是帮主专门存放一些奇怪物品的地方,有可能是解迷的重要关键,也有可
能是从各处收集来的人头,所以这里的磁场总是存在于不稳定的状态中,当这里存
放人头的数目比较多的时候,经过这里的人就会受到来自地狱的诅咒,就算是身在
地狱的各殿阎王也一样不能幸免

LONG);
	setup();
	replace_program(ROOM);
}
