inherit ROOM;
void create() {
	set( "short", "-婆娑的家～大厅-" );
	set( "object", ([
		"file8"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"file10"   : "/open/main/obj/shiblade",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/killer/weapon/k_cloth3",
		"amount4"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/killer/obj/k_ring",
		"file7"    : "/open/ping/obj/gold_hand",
		"amount8"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 10004 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "owner", "zzxx" );
	set( "long", @LONG
这是婆娑平常发呆的地方，也是他拿来接待朋友的地方，所
以常常会有很多人在这，又因为婆娑嗜茶如命，因此四周的环境
充满了茶香，以及一些小板凳，不禁让你觉得好像是老人的茶会
一样，可是却又充满着让你亲近无比的感觉，所以你自然地坐了
起来一起喝杯茶啰，四周得摆设既简单又朴素，因此四周看起来
又是如此的庄严。
LONG);
	setup();
	replace_program(ROOM);
}
