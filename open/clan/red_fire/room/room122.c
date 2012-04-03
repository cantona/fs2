inherit ROOM;
void create() {
	set( "short", "$HIW$● 碎 石 路 ●$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room121",
		"west"      : "/open/clan/red_fire/room/room123",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "long", @LONG
一地银白色的$HIW$鹅卵石$NOR$，让你心中感觉一切有如$HIC$童$HIG$话$HIR$世$HIY$界$NOR$般的美丽，走
在这条$HIW$鹅卵石$NOR$组成的碎石路上，仿佛又回到了童年时代；四周的$HIR$花$HIY$草$NOR$也深
深的吸引着你的目光，让你流连忘返，继续向前迈进......。


LONG);
	setup();
	replace_program(ROOM);
}
