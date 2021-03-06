inherit ROOM;
void create() {
	set( "short", "$HIR$藏剑阁$NOR$" );
	set( "owner", "mudu" );
	set( "item_desc", ([
		"window" : @ITEM
 在通过密道之后，你眼前出现三座大雕像，地上满满的剑痕，隐约可;感觉到一股刚硬之气；除了三座雕像(statue)之外，还有一个极大的石门，门;上贴了数道古符….似乎在封印着极不祥的东西，门边有一石碑(stone)，;石碑上好似刻有东西…。
ITEM,
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file7"    : "/open/magic-manor/obj/golden-ball",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/open/sky/obj4/rigid_shells",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/capital/obj/4-1",
		"file4"    : "/open/magic-manor/obj/soil-ball",
		"amount4"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"file1"    : "/open/gsword/obj1/bloodsword",
		"amount9"  : 1,
		"file10"   : "/open/sky/obj5/shue_jade",
		"amount1"  : 1,
		"amount2"  : 1,
		"file8"    : "/open/magic-manor/obj/fon-sky-sword",
		"file5"    : "/open/sky/obj1/wind_emblem",
		"amount8"  : 1,
		"file9"    : "/open/sky/obj10/cypress_yin",
	]) );
	set( "build", 10054 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room221",
		"east"      : "/open/clan/sky-wu-chi/room/room265",
	]) );
	set( "long", @LONG
踏入此处宝剑反映出冰冷的光芒，令人感到不颤而寒，一把把宝剑整齐
的排列在阁中，环视一圈四周的剑皆为罕见之神兵利器，不经赞叹此人
之收藏，突然间看到一把泛出异样红色光芒的长剑立在中央，仿佛剑中
之神凝视天下，莫非这就是传说中的灵剑====真。连阳剑(Sad Sword)？
LONG);
	setup();
	replace_program(ROOM);
}
