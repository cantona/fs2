inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-6" );
	set( "object", ([
		"file2"    : "/open/killer/obj/black",
		"amount2"  : 45,
		"amount6"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount3"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount1"  : 1,
		"file6"    : "/open/quests/snake/npc/obj/snake-key-1",
		"file1"    : "/open/killer/obj/blood",
	]) );
	set( "light_up", 1 );
	set( "owner", "miffy" );
	set( "build", 11406 );
	set( "exits", ([
		"southeast" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是西北房杂物房,这个房间的东西都是由miffy 和其他好友帮忙收集而成
因为这些杂物难以取得,所以更显得此杂物的难能可贵,而由此出去的杂物
也都能够发挥他其最大的功用,合成转换,因此此大楼的主人艺术也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
