inherit ROOM;
void create() {
	set( "short", "$RED$阴曹入口$NOR$" );
	set( "owner", "cong" );
	set( "object", ([
		"amount7"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/water-ball",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mogi/dragon/obj/key",
		"file2"    : "/open/magic-manor/wood/obj/wood-sword",
		"amount4"  : 1,
		"file9"    : "/obj/gift/xisuidan",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"amount8"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file6"    : "/open/killer/island/obj/luamulet",
	]) );
	set( "build", 10161 );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room99",
	]) );
	set( "long", @LONG


   你已经来到了阴间的入口。虽然距离地府还有一段距离，但是你已经
感受到阵阵刺骨的阴风。四周一片荒凉，但是却鬼影幢幢，看来这边的夜
总会蛮热闹的，应该不愁没伴。南边和上面好像是和人世间相通的管道，
不过好像有一股无形的力量隔开这两个不同的世界，看来要从这两个方向
回去不是那么简单的事情。

LONG);
	setup();
	replace_program(ROOM);
}
