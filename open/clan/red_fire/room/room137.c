inherit ROOM;
void create() {
	set( "short", "$HIY$※$NOR$$HIC$漂漂$NOR$$HIM$小雨灵$NOR$$HIG$的$NOR$$HIR$练舞厅$NOR$$HIY$※$NOR$" );
	set( "owner", "corin" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/wu/npc/obj/armband",
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount10" : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/love/obj/cloth1",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/dancer/obj/maple_ribbon",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10090 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room132.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

这里是$HIM$小雨灵$NOR$的$MAG$练舞厅$NOR$，占地一顷，四面全都是$HIY$大铜镜$NOR$，可以让$HIM$小雨灵$NOR$看
到自己的舞姿有何缺点需要改进，让$HIM$小雨灵$NOR$的舞术能日进千里。有一面$HIY$镜
子$NOR$可以打开，里面放了一些$HIY$练舞装$NOR$，及几条用来擦汗的干净毛巾，还有表
演的$HIC$彩$NOR$$HIM$带$NOR$。地板是由$HIB$长白山$NOR$运来的百年上好$YEL$杉木$NOR$，不易磨损，人摔在地上
也不会觉得疼痛，$HIM$小雨灵$NOR$就可以发挥$HIC$天$NOR$$HIR$马$NOR$$MAG$行$NOR$$HIB$空$NOR$的想像力，跳出超高难度的
动作也不怕摔伤自己了。


LONG);
	setup();
	replace_program(ROOM);
}
