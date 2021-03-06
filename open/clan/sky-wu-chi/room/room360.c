inherit ROOM;
void create() {
	set( "short", "寒霜居-武器库" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "owner", "roboo" );
	set( "build", 10355 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room241.c",
	]) );
	set( "long", @LONG
在这满是浑天水晶所建成的房间中，表面看起来与东边的寒霜
居没什么不同。当你准备要离去之时，突然一阵豪光从你背后射来
，速度之迅速令你闪无可闪，原以为是中了暗器，心想完了！但当
你定心一看才发觉一点伤也没有。好奇心怂恿下，向那道光芒的来
处一看才发觉原来在水晶璧中摆放着八只各具异能的绝世兵器  

杀手─阎匕影螫魂　　恶人─魔爪混天杀　　圣火─化劫菱归真　
魔刀─刀斩邪元归　　金刀─幔罗刀无影　　仙剑─枫映天莲剑
段家─凌微云扇飘　　舞者─雷火彩凤翔

LONG);
	setup();
	replace_program(ROOM);
}
