inherit ROOM;
void create() {
	set( "short", "$HIY$香蕉周刊$HIB$有靶儿$HIW$厕所$NOR$" );
	set( "owner", "blur" );
	set( "object", ([
		"amount4"  : 1,
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount1"  : 1,
		"file7"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/main/obj/unarmed-b",
	]) );
	set( "build", 10296 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room34.c",
		"east"      : "/open/clan/hell/room/room96",
		"west"      : "/open/clan/hell/room/room50",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里就是香蕉周刊的男厕所了...
有位阿婆整天在这儿拖地...
也不知道真拖地还是假拖地....
只见阿婆盯着来来往往的便客看...
像是一付要嚐尽天下香肠的样子..
真是 价 恐 布 !!
这时老大阿飞进来撇尿...
阿婆如同往常边拖地边偷瞄...
只见阿婆脸色大变.....旋急就夺门而出...大叫 
天阿!! 大蟒蛇!!! 
阿飞呵呵两声...颤抖了两下..就把巨蟒收了起来..走了出去..
LONG);
	setup();
	replace_program(ROOM);
}
