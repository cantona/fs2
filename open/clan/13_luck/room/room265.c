inherit ROOM;
void create() {
	set( "short", "龙之崖" );
	set( "object", ([
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/ping/obj/gold_hand",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/snow/obj/figring",
		"file5"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"file9"    : "/open/gsword/obj/yuskirt",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "owner", "fighter" );
	set( "item_desc", ([
		"灭杀龙" : @ITEM
[22m你眼前一黑，接着什么都不知道了....[0m
你死了
[31m阴曹入口[0m-
          你已经来到了阴间的入口。虽然距离地府还有一段距离，但是你已经
感受到阵阵刺骨的阴风。四周一片荒凉，但是却鬼影幢幢，看来这边的夜
总会蛮热闹的，应该不愁没伴。南边和上面好像是和人世间相通的管道，
不过好像有一股无形的力量隔开这两个不同的世界，看来要从这两个方向
回去不是那么简□漕□﹛C
    这里唯一的出口是 north。
ITEM,
		"stone" : @ITEM

一个巨大的石头，其上留下着一个深重的掌印，下面并烙下四个
极深的大字 
               [22m◎  [5m[21m波  动  [0m[23m●  [5m[24m皇  拳  [0m[22m◎[0m 
ITEM,
	]) );
	set( "build", 10959 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room276",
		"north"     : "/open/clan/13_luck/room/room100.c",
	]) );
	set( "long", @LONG

[33m    [0m四处空荡，一走进这悬崖，便只听到自己的脚步声回荡在山谷之
中不绝于耳，仔细聆听，似乎可听见风中传来微弱的练功吆喝声，闭
眼按运内力耳听八方，风中之声竟是失传己久的[0;1;31m□[1mi[1;36m□[1mi[1m□[1m□[1;33m□[1m□[1m□[1m□[1;31m□[1mj[0m只见悬
崖下散出千万丈的金光，一时间龙腾九天回旋空，瞬间消失无踪，惊
厄之中突然一道闪光从山谷下飞纵至你面前，眼前正是
[33m            [0;1;31m□[1mi[1;36m□[1mi[1m□[1m□[1;33m□[1m□[1m□[1m□[1;31m□[1mj[0m唯一传人．[0;1;31m□[1m□[1m□[1m□[1m□[1ms[0m
$HIY$[33m只见其身旁[0;1;5;33m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5ms[1;5m□[1;5m□[0m$HIY$[33m护身气劲光芒围绕其修为之高令人暗自赞叹！[0m

LONG);
	setup();
	replace_program(ROOM);
}
