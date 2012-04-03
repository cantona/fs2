inherit ROOM;
void create() {
	set( "short", "$HIR$藏$NOR$Φ$HIY$妖幻头带$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"amount10" : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10074 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room290",
	]) );
	set( "long", @LONG
强烈的腐蚀妖气朝着你迎面扑来，使你不得不运起全力抵挡这吞噬生命
的惊人杀气，这里封印的神器，原本属于背叛天界，堕落至凡间的千年树妖
--舞风扬所有，当他于千年前败于天将之后，遭妖魂遗弃的肉身，被众神调
制成为十二神器中少数具有妖气的绝世装备．

LONG);
	setup();
	replace_program(ROOM);
}
