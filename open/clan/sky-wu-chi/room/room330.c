inherit ROOM;
void create() {
	set( "short", "「多喝水”的房间" );
	set( "object", ([
		"amount5"  : 1,
		"amount2"  : 1,
		"amount6"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/tendo/obj/chaosbelt",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount1"  : 1,
		"amount10" : 1,
		"file10"   : "/open/wu/npc/obj/armband",
		"amount7"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "owner", "sogo" );
	set( "build", 10125 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room316",
	]) );
	set( "long", @LONG




                                                    江           君    .   .
                                                         长  住   .   .....
                                                 头        .   ☆  . ...
                                                    ☆ .     .       .
                                              我    .    .      .        ☆
                                          住      .   .     .︵ ︵ ─╮
                                                 .  .☆ . （  ' ╮ ） ╮
                                           长   .  .   .    ）q（ (===┤
                                               .  .  .    （  │, ）  ◢
                                          江  . .   .       ）╰┬)（ ）
                    共               日       . . . ☆       .* /  |（)
                        君               尾   ..            ,wWw（ ）（)◢ 　
                  饮                日       .               '','-╯ （╰╮
              长           见                                , │  ＼ ╰ ）
          江                  不       思                      │    ＼
     水                            君                          └～～～～

LONG);
	setup();
	replace_program(ROOM);
}
