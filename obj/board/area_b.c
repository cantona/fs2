inherit BULLETIN_BOARD;

void create()
{
	set_name("区域讨论版", ({ "area board", "board" }) );
	set("location", "/open/wiz/area");
	set("board_id", "area_b");
	set("long", @LONG
这是专门提供巫师们申请新区域或者有人口流动的纪录用的
例如, 有谁想负责某一区域? 有谁想卸任? 有谁想加入某一区域?
有谁退出某一区域? 或者甲区域想弄个任务, 请求乙区域支援..
LONG);
	setup();
	set("capacity", 50);
}
