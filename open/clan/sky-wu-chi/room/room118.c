inherit ROOM;
void create() {
	set( "short", "天天开馆" );
	set( "object", ([
		"file7"    : "/open/magic-manor/obj/fire-color-ribbon",
		"amount4"  : 1,
		"amount9"  : 1,
		"amount1"  : 2778,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"file9"    : "/obj/gift/lingzhi",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"file1"    : "/open/killer/obj/hate_knife",
		"file5"    : "/open/killer/obj/k_ring",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10034 );
	set( "light_up", 1 );
	set( "owner", "client" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room15",
	]) );
	set( "long", @LONG

这里是我想上所开的天天开馆，其名字意义要为天天开心，在这里
和风薰柳，花香醉人，正是南国春光漫烂的季节。

大门门上茶杯大小的铜钉闪闪发光，门顶匾额写着‘天大地大，为我最乐。’

而站在门前有一个看起来像是朝廷命官的人，此人是我想上的
第二女弟子神算杀杀杀，为人铁面无私，有现任女包青天之名。
但是我想上是恶名满天飞，难道这是传说中的爱超越一切吗？
或许她的房间应该在我想上的内房才对。我想上最好期盼
老婆大人不要发现他们的关系(奸情)?。

LONG);
	setup();
	replace_program(ROOM);
}
