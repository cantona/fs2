inherit ROOM;
void create() {
	set( "short", "糯米鸡" );
	set( "owner", "ecs" );
	set( "light_up", 1 );
	set( "object", ([
		"amount4"  : 1,
		"amount9"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/killer/obj/s_pill",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/f_dag",
		"file8"    : "/open/killer/headkill/obj/f_dag",
		"file6"    : "/open/killer/headkill/obj/f_dag",
		"amount10" : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1263,
		"file4"    : "/open/killer/headkill/obj/f_dag",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 11193 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room178",
		"west"      : "/open/clan/ou-cloud-club/room/room152.c",
	]) );
	set( "long", @LONG
古巴比伦王颁布了汉摩拉比法典 刻在黑色的玄武岩 距今已经三千七百多年
妳在橱窗前       凝视碑文的字眼   我却在旁静静欣赏妳那张我深爱的脸
祭司 神殿 征战 弓箭 是谁的从前      喜欢在人潮中妳只属于我的那画面
经过苏美女神身边    我以女神之名许愿      思念像底格里斯河般的漫延
 
LONG);
	setup();
	replace_program(ROOM);
}
