inherit ROOM;
void create() {
	set( "short", "$HIW$● 碎 石 路 ●$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room41.c",
		"west"      : "/open/clan/red_fire/room/room121",
	]) );
	set( "long", @LONG
一地银白色的$HIW$鹅卵石$NOR$，让你心中感觉一切有如$HIC$童$HIG$话$HIR$世$HIY$界$NOR$般的美丽，走
在这条$HIW$鹅卵石$NOR$组成的碎石路上，仿佛又回到了童年时代；往$HIM$东边$NOR$有一座人
间向往的美丽城堡；往$HIM$西边$NOR$继续前进又是一处未知而美丽的世界。


LONG);
	setup();
	replace_program(ROOM);
}
