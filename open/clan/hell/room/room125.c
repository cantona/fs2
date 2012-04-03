inherit ROOM;
void create() {
	set( "short", "小笨蛋的卧室" );
	set( "object", ([
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file3"    : "/open/killer/obj/dagger",
		"amount4"  : 1,
		"file6"    : "/open/killer/headkill/obj/w_dag",
		"amount3"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file4"    : "/open/killer/headkill/obj/i_dag",
		"amount7"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file5"    : "/open/killer/headkill/obj/i_dag",
	]) );
	set( "owner", "acelan" );
	set( "build", 10482 );
	set( "item_desc", ([
		"漂亮妹妹" : @ITEM
他突然转过头来瞪你一眼
ITEM,
		"书目资料" : @ITEM
基本拳谱
基本刺术
三字经
基本剑术
赌神秘术
just kidding ^_^
ITEM,
		"个人资料" : @ITEM
请参考我的网页吧 ^_^
http://www.ice.cycu.edu.tw/~s8827142/
ITEM,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room126.c",
		"west"      : "/open/clan/hell/room/room124",
	]) );
	set( "long", @LONG
小笨蛋的卧室四周被一个透明的大蛋壳给包围起来，就像一个大
透明球，在外墙上还刻着小笨蛋的(个人资料)，还有小笨蛋最喜欢的
(书目资料)。此外还有个(漂亮妹妹)在房间里游荡，她可是小笨蛋的
女朋友喔，不过她满凶的，大家要小心别惹到她了 :P
LONG);
	setup();
	replace_program(ROOM);
}
