inherit ROOM;
void create() {
	set( "short", "$HIC$西银河系$NOR$" );
	set( "owner", "lord" );
	set( "object", ([
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount8"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/daemon/class/fighter/armband",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/figring",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10035 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room239",
	]) );
	set( "long", @LONG
这里是传说中 神秘的幻境 西银河系

      $HIC$拂天光 照汗青 一步人生终是迷$NOR$
      $HIC$石中火 梦中生 羽扇轻摇任风流$NOR$

四周环绕着悠扬的吟诗声 弥漫着一股浓浓的诡异气氛

$HIM$风飒飒的吹着──!! 云缓缓的飘着──!!$NOR$
$HIM$雨零星的下着──!! 闪闪的星光像雷电般的落下──!!$NOR$


LONG);
	setup();
	replace_program(ROOM);
}
