inherit ROOM;
void create() {
	set( "short", "武器房间" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount9"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/obj/gift/shenliwan",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/magic-manor/obj/wood-ball",
		"amount3"  : 1,
		"file5"    : "/obj/gift/hobowdan",
		"file10"   : "/open/mogi/dragon/obj/sunblade",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file7"    : "/obj/gift/xisuidan",
		"amount2"  : 1,
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/open/magic-manor/obj/fon-sky-sword",
		"file1"    : "/open/badman/obj/mask",
	]) );
	set( "build", 10260 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room205",
		"down"      : "/open/clan/sky-wu-chi/room/room162.c",
	]) );
	set( "long", @LONG
这里是小二的武器房间
你的眼前一阵七色光芒天那
摆在地上的
不就是
聚灵山庄八傻的武器嘛
怎会出现在这里
小二凭藉着广大的人脉
和各方好汉蒐集了各种的武器摆在这里
看来fs里面应该没有他拿不到的优良eq了吧
可是看一看...好像还少了什么东西....
难道是...
LONG);
	setup();
	replace_program(ROOM);
}
