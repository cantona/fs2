inherit ROOM;
void create() {
	set( "short", "宝库" );
	set( "object", ([
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/fire-hole/obj/p-pill",
		"amount1"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/killer/memory/static",
		"amount2"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
	]) );
	set( "build", 4345 );
	set( "owner", "suzukiami" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room56",
	]) );
	set( "long", @LONG
建构中
还不知道要写啥
所以慢慢等吧
看看我啥时候会想起来怎写
不过可能很难
因为我叙述的创意不是很好
所以在这里看不到有创意的房间叙述
如果要看到好的叙述你就来错地方了
对了
以后看到小二别玩他的
皮卡邱
会被扁
谢谢
LONG);
	setup();
	replace_program(ROOM);
}
