inherit ROOM;
void create() {
	set( "short", "夏雷藏书阁" );
	set( "owner", "roboo" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room345",
	]) );
	set( "object", ([
		"file2"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/capital/guard/gring",
		"file3"    : "/open/tendo/obj/lucloth",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10003 );
	set( "long", @LONG
    这个房间的墙上有许多像抽屉的小阁子，里头不知道是放了些什
么，你向在这里研究古书的夏雷请教，才知道原来这里的小抽屉保存
着各种古文物，包括一些石碑、石版、和古书籍，这些都是历史价值
极高的物品，而古学家－小宇先生正是在这里研究这些鲜为人知的远
古资料并将之著作成书。
LONG);
	setup();
	replace_program(ROOM);
}
