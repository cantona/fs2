inherit ROOM;
void create() {
	set( "short", "$HIC$【$HIM$大饭店 $HIY$电梯$HIW$五楼$HIC$】$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room166",
		"f4"        : "/open/clan/red_fire/room/room163.c",
		"f3"        : "/open/clan/red_fire/room/room79",
		"f2"        : "/open/clan/red_fire/room/room80.c",
		"f1"        : "/open/clan/red_fire/room/room71.c",
	]) );
	set( "long", @LONG
哇......好宽敞的$HIY$电梯$NOR$喔，地面用的$HIR$红色$NOR$高级地毯是$HIC$波斯$NOR$进口的，天
花板的$HIW$灯具$NOR$，全部是用$HIM$法国$NOR$来的水晶灯组，两边的墙面竟然还用最上等的
$YEL$桧木$NOR$作扶手及装饰，一幅一幅名画挂在墙面上更显现出走廊的优雅和高级
，难怪$HIR$爱玫$NOR$教主说这是引进未来最新的建筑科技所完成的高级住宅区....
而且可以直接到喜欢的$HIW$楼层$NOR$......


LONG);
	setup();
	replace_program(ROOM);
}
