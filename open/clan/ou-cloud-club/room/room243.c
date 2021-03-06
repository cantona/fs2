inherit ROOM;
void create() {
	set( "short", "$HIC$冷  $HIY$月  $HIB$寒$NOR$" );
	set( "object", ([
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file9"    : "/open/scholar/obj/s_hands",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file10"   : "/daemon/class/fighter/armband",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/prayer/obj/boris-cloth",
		"amount3"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10007 );
	set( "owner", "back" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room215",
	]) );
	set( "long", @LONG
愿思念是并没尽头 没有依附现在过去或以后
即使这躯壳有一朝化做尘垢 仍能跟您缠绵于宇宙
                                                                                
霓虹上有雪 洒得多撇脱 像向天地万物作最后告别
分不清季节 这冰冷四月 眼前的世界景色凄迷决绝
                                                                                
抓一把细雪 放于手灼热 但愿不再怕北风深寒刺裂
紧紧拥抱您再一次吻别 我愿不要说再见 免得心更酸

LONG);
	setup();
	replace_program(ROOM);
}
