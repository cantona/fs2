inherit ROOM;
void create() {
	set( "short", "$HIW$奈何桥头$NOR$" );
	set( "object", ([
		"file3"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
	]) );
	set( "build", 10689 );
	set( "light_up", 1 );
set( "exits", ([        
		"south"     : "/open/clan/hell/room/hall.c",
		"north"     : "/open/clan/hell/room/room2.c",
	]) );
	set( "long", @LONG
再往前去就是奈何桥了，过了奈何桥就不能再回头了，难道果真人生
没有不死的传说吗！？只见一团团的鬼影往奈何桥上走去，似乎除了转世
投胎之外，已经无路可走了。每个鬼同志的脸色又恐慌又匆忙，仿佛害怕
接受死后的审判，又怕太晚去轮回找不到好位置，还是赶快上路吧！！

  白无常(White gargoyle)

LONG);
	setup();
	replace_program(ROOM);
}
