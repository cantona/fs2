inherit ROOM;
void create() {
	set( "short", "$HIC$冰心$NOR$的$HIM$闺房$NOR$" );
	set( "owner", "lawyer" );
	set( "object", ([
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"file4"    : "/open/capital/obj/blade2",
		"file10"   : "/open/port/obj/wolf_ring",
		"file7"    : "/open/killer/obj/k_ring",
		"amount4"  : 1,
		"amount10" : 1,
		"amount2"  : 1,
		"file6"    : "/open/main/obj/shiblade",
		"amount1"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount5"  : 1,
		"amount3"  : 1,
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"file9"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"file3"    : "/daemon/class/blademan/obj/ublade",
		"amount8"  : 1,
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_armor",
	]) );
	set( "build", 10282 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room81",
	]) );
	set( "long", @LONG

这里是$HIC$冰心$NOR$的闺房，入房即闻到淡淡的$HIW$梅$NOR$香，推开窗户，万点$HIW$梅
花$NOR$环绕房间西南两边。书桌旁有一$HIM$古筝$NOR$，造型典雅。床前是一$HIY$屏
风$NOR$，上面彩绘着$HIC$迎春图$NOR$，画工精致，用色活泼，应当是出自大家
手笔。$HIY$屏风$NOR$两旁的$HIW$白石$HIC$嵌云$HIR$柱$NOR$上工整地刻着一幅$HIR$对联$NOR$写道：

        「$HIC$座上珠玑照日月$NOR$，$HIY$却掩珠帘$NOR$，$HIR$难为芳心$NOR$
          $HIC$堂前飘香焕云霞$NOR$，$HIY$不知岁月$NOR$，$HIR$但晓清音$NOR$。”


LONG);
	setup();
	replace_program(ROOM);
}
