inherit ROOM;
void create() {
	set( "short", "保命小屋" );
	set( "owner", "biwem" );
	set( "object", ([
		"file1"    : "/daemon/class/fighter/figring",
		"amount5"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount7"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"amount9"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file4"    : "/open/gsword/obj/may_ring",
	]) );
	set( "build", 10048 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room352.c",
		"south"     : "/open/clan/sky-wu-chi/room/room354.c",
		"north"     : "/open/clan/sky-wu-chi/room/room353.c",
		"down"      : "/open/clan/sky-wu-chi/room/room175.c",
		"west"      : "/open/clan/sky-wu-chi/room/room355",
	]) );
	set( "long", @LONG
这是专门放保命ㄉ小装备
全都是机器人一号ㄉ生活必需品也就是练功ㄉ小配备
如玲珑靴,魔法盾,幸运草环,阳炎臂环,妖行甲,
寒冰,血龙鞭,冰雪神戒,菩提袈裟........等等
一些放不上枱面ㄉ装备,偶尔有放ghost eq 等等
不过他ㄉ希望是能拿一套save eq @@
所以他在等好心人士ㄉ施舍
LONG);
	setup();
	replace_program(ROOM);
}
