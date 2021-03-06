inherit ROOM;
void create() {
	set( "short", "蓝梦组织总部" );
	set( "owner", "whale" );
	set( "object", ([
		"file3"    : "/open/scholar/obj/icefan",
		"amount4"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"file10"   : "/open/ping/obj/ring-2",
		"amount9"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file9"    : "/open/wu/npc/obj/armband",
		"file5"    : "/open/ping/obj/chilin_legging",
		"amount2"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file7"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "build", 10056 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room71",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
蓝梦组织是十三吉祥里最为神秘的一个集团, 暗中操纵着世界政经体系
的运作, 随然仅仅是十三吉祥的一个支部, 然旗下会员三千多人, 遍布欧美,
个个都身怀异于常人的超级力量,尤其最顶级的几个首脑人物, 更有鬼神般
的毁灭性力量, 可以自由操纵磁场, 改变大自然的定律. 然而, 这些都有同
样的目标, 就是要重整这个混乱污秽的世界. 因此, 在最后审判到来之时, 
将会从宇宙轨道上降下天火, 毁灭所有生命, 使世界回复成为数亿年前的
湛蓝面貌, 实现蓝色的梦想...
LONG);
	setup();
	replace_program(ROOM);
}
