inherit ROOM;
void create() {
	set( "short", "$HIY$Macintosh$HIC$的家$NOR$" );
	set( "owner", "macintosh" );
	set( "light_up", 1 );
	set( "object", ([
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_legging",
		"amount7"  : 1,
		"file9"    : "/open/tendo/obj/chaosbelt",
		"amount10" : 1,
		"amount4"  : 1,
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount1"  : 1,
		"file10"   : "/daemon/class/blademan/obj/shield",
		"file4"    : "/u/d/dhk/questsfan/obj/diamond_hairpin",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file6"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"amount9"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_hands",
		"file7"    : "/u/d/dhk/questsfan/obj/diamond_skirt",
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_belt",
	]) );
	set( "build", 10156 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room89",
	]) );
	set( "long", @LONG

这里是$HIY$麦金塔$NOR$的小房间，你可以看到这里的陈设非常简单，只有一张小桌子和小床。
在小床上丢着几件衣服，桌上也乱七八糟的，看得出来这里的主人一定蛮混的...
仔细一看，桌上摆着一台$HIC$闪闪发光$NOR$的$HIW$电脑$NOR$，正在嘎嘎做响的工作中。
你不禁好奇的迎上前去看看这台$HIW$电脑$NOR$上在做些什么?
突然你的眼睛一亮，发现到这台$HIW$电脑$NOR$竟然不是大家所使用的$HIM$光华牌$NOR$的$HIC$IBM$NOR$相容$HIR$PC$NOR$...
而是量小质精又好用的$HIB$Apple PowerPC Macintosh$NOR$ !!!!
当场你不禁觉得这个房间的主人是个高尚又有品味的人了...


LONG);
	setup();
	replace_program(ROOM);
}
