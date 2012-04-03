inherit ROOM;
void create() {
	set( "short", "$YEL$黄金甲龙冢$NOR$" );
	set( "owner", "bbsboss" );
	set( "light_up", 1 );
	set( "object", ([
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"file3"    : "/open/mogi/dragon/obj/key",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount6"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount2"  : 1,
	]) );
	set( "build", 10047 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room190",
		"west"      : "/open/clan/ou-cloud-club/room/room188.c",
	]) );
	set( "long", @LONG

     $HIY$黄金甲龙身上的鳞片 ,具有特殊的魔力$NOR$


此乃魔界守护神兽黄金甲龙身上的鳞片...
据说有特殊的魔力...可将人瞬间传送到魔界..

小马冒险前往黄金甲龙窟....将其扫荡一空.....
此处就是从黄金甲龙身上取回的鳞片....
往前一看....小马也沾沾自喜的把玩着战利品^_^
LONG);
	setup();
	replace_program(ROOM);
}
