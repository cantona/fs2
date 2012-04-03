inherit ROOM;
void create() {
	set( "short", "$HIW$● 碎 石 路 ●$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room122.c",
		"west"      : "/open/clan/red_fire/room/room124",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "long", @LONG
一地银白色的$HIW$鹅卵石$NOR$，让你心中感觉一切有如$HIC$童$HIG$话$HIR$世$HIY$界$NOR$般的美丽，走
在这条$HIW$鹅卵石$NOR$组成的碎石路上，仿佛又回到了童年时代；突然你发现远处
有一堆$HIY$草丛$NOR$，你正觉得看起来真$HIR$煞$HIC$风景$NOR$，却被一股不知的$HIM$魔力$NOR$，吸引着你
一步一步向前迈入........。


LONG);
	setup();
	replace_program(ROOM);
}
