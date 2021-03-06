inherit ROOM;
void create() {
	set( "short", "$HIY$小廖休息房$NOR$" );
	set( "owner", "poll" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount4"  : 1,
		"file5"    : "/open/killer/weapon/k_torch",
		"file4"    : "/open/scholar/obj/icefan",
		"file8"    : "/daemon/class/fighter/armband",
		"file9"    : "/open/gsword/obj/yuskirt",
		"amount8"  : 1,
		"amount9"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/killer/obj/k_ring",
		"file3"    : "/open/killer/obj/s_pill",
		"amount6"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount5"  : 1,
		"amount1"  : 6,
	]) );
	set( "build", 10422 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room78.c",
		"south"     : "/open/clan/13_luck/room/room247",
		"out"       : "/open/clan/13_luck/room/room89.c",
		"north"     : "/open/clan/13_luck/room/room106.c",
	]) );
	set( "long", @LONG
$HIW$这里是一间宽敞舒适的休息室，一张圆桌上正摆着刚沏好的茶，
和煦的阳光从窗口映射到地板上，看这多么舒适的环境，尤其中间有
一张大床，看了就让人忍不住想上去躺一躺，阵阵茶香味正溢满四周
，的确是一间相当适合给忙碌一整天的廖官人休息的房间。$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
