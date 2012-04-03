inherit ROOM;
void create() {
	set( "short", "$HIC$剑神界$NOR$" );
	set( "owner", "ashin" );
	set( "object", ([
		"file5"    : "/open/gsword/obj/dragon-cloth",
		"amount6"  : 1,
		"amount7"  : 100,
		"file4"    : "/open/fire-hole/obj/r-pill",
		"file9"    : "/open/common/obj/liz_meat",
		"file8"    : "/open/gsword/obj/dragon-sword",
		"amount5"  : 1,
		"file6"    : "/open/gsword/obj1/bball",
		"file7"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 169,
		"amount9"  : 1,
		"amount8"  : 1,
		"amount4"  : 150,
		"amount10" : 1,
		"amount2"  : 100,
		"file2"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/fire-hole/obj/y-pill",
		"file10"   : "/open/gsword/obj/dragon-sword",
		"amount3"  : 98,
	]) );
	set( "build", 10285 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room12.c",
		"up"        : "/open/clan/hell/room/room9.c",
		"east"      : "/open/clan/hell/room/room118",
		"west"      : "/open/clan/hell/room/room57.c",
	]) );
	set( "long", @LONG
    这里是$HIR$阴曹地府$NOR$中第三层的剑神界，不是说这里的
人是剑神，而是要被 贱 神们给$HIR$SM$NOR$，看到满是伤痕的破
剑真不知道是怎么被柔虐的。。。

$HIR$喂，你这个新来的还不把衣服拖了。
就是你就是你，还看！！$NOR$

  幸运一把抓的尸体(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
