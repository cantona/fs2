inherit ROOM;
void create() {
	set( "short", "miffy 大楼2-3" );
	set( "object", ([
		"amount2"  : 50000,
		"file6"    : "/open/killer/obj/hate_knife",
		"file4"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/killer/obj/hate_knife",
		"file2"    : "/open/killer/obj/hate_knife",
		"amount4"  : 50000,
		"amount5"  : 50000,
		"file7"    : "/open/killer/obj/hate_knife",
		"amount7"  : 50000,
		"amount6"  : 50000,
		"amount3"  : 50000,
		"file5"    : "/open/killer/obj/hate_knife",
	]) );
	set( "build", 10164 );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
这里是西房千古恨,这个房间的武器都是由miffy 和其他好友帮忙收集而成
因为千古恨的难以取得,所以更显得此武器的难能可贵,而由此出去的武器
也都能够发挥他其最大的功用,杀敌无数,因此此大楼的主人暗器技巧也是相当之高高到
绝世罕见的地步...
LONG);
	setup();
	replace_program(ROOM);
}
