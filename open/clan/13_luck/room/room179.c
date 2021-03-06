inherit ROOM;
void create() {
	set( "short", "魔界之路" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount3"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/scholar/letter",
		"amount4"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"amount1"  : 1,
	]) );
	set( "build", 10521 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room241.c",
		"east"      : "/open/clan/13_luck/room/room176.c",
		"south"     : "/open/clan/13_luck/room/room177",
		"out"       : "/open/clan/13_luck/room/room136.c",
		"north"     : "/open/clan/13_luck/room/room178",
	]) );
	set( "long", @LONG

    这里就是传说中的$HIB$魔界之路$NOR$，是由$HIY$十三吉祥$NOR$的前辈们用血所堆成
的路，回想起当年，前辈们脚踏$HIM$七星塔$NOR$，血溅$CYN$魔森林$NOR$，费尽千辛万苦
才到达，这里以魔界村为中心，四方分别是，西$HIG$炎龙谷$NOR$，北$HIC$天邪峰$NOR$，
南$CYN$魔森林$NOR$，东$HIR$古堡$NOR$，此处有前人留下的魔界地图，十三的后人们，要
谨记前人的教诲，一定要血刃魔界的统治者$HIR$焚天魔王$NOR$，让人间恢复正
常，让$HIY$十三吉祥$NOR$永远留名于世。

                  $HIC$天邪峰$NOR$(north)
                        o
                        o       
   $HIG$炎龙谷$NOR$(west)---魔界村(old man)---$HIR$古堡$NOR$(east)
                        o
                        o
                  $CYN$魔森林$NOR$(south)

LONG);
	setup();
	replace_program(ROOM);
}
