inherit ROOM;
void create() {
	set( "short", "$HIW$ζ$HIR$血 斋$HIW$ζ$NOR$" );
	set( "object", ([
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/quests/snake/npc/obj/snake_gem",
		"file5"    : "/open/doctor/pill/sky_pill",
		"amount8"  : 1,
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"amount5"  : 8,
		"amount3"  : 1,
		"file3"    : "/open/quests/snake/npc/obj/un_cloth",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount9"  : 1,
		"file6"    : "/open/capital/obj/blade2",
		"file10"   : "/open/doctor/pill/human_pill",
		"file4"    : "/open/quests/snake/npc/obj/helmet",
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount10" : 6,
	]) );
	set( "build", 10002 );
	set( "owner", "bacchus" );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room263",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
初踏此地,你只觉一阵$HIC$凉意$NOR$卷卷而来,使你自觉的瑟缩起来.....
见山头有一草芦,但周围包着浓浓$HIR$深红色$NOR$的$HIR$山霾之气$NOR$,分外诡异,
配合上了天上的$HIW$孤月$NOR$(Moon),使你更觉得格外的$HIG$阴气森森$NOR$,好像
所有的$HIC$寒气$NOR$都聚集到此地似的.你远远的看到一阵又一阵的$NIR$血红$NOR$
的光线从草芦之中$CYN$暴射出来$NOR$,其中似乎有个女人的身影在其中..
这番画面引起你的好奇,你信步向前去查看,发现了一个女子正
拿着一把$HIB$长相怪异无比刀$NOR$,正尝试提升她的$HIR$杀力$NOR$...............
原来这就是$HIC$苹芃$NOR$(Bacchus)用来提升内功的地方.看着$HIB$刀$NOR$发出的
阵阵$HIR$气血红光$NOR$,缓缓流入$HIC$苹芃$NOR$的身体,你不经觉得心惊肉跳,看
来今天又有不少的$HIW$生命$NOR$又丧失在她的手下了.
LONG);
	setup();
	replace_program(ROOM);
}
