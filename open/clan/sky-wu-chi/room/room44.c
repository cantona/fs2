inherit ROOM;
void create(){
set("long",@LONG
一走进天龙学堂，发现在墙上有一副横匾，上面写着斗大的◎天龙学堂◎四个
字，在横匾两旁是一副对联，左边写着文蹈，右边写的是武略，这里就是平南书院
教导学生‘御’课程的地方，能在这里授课的讲师，不是大理王国的大将军，就是
正丞相等朝廷重要的文武大臣，有时候，还会邀请到大理王朝的军师讲述一些治理
国家或对外关系所需要用的谋略等。在门口旁边有一个架子，是要让进到里面来的
人能有放置装备的地方。
LONG);
	set( "short", "$HIY$【平南书院】 $HIC$天龙学堂$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"file10"   : "/obj/gift/xiandan",
		"file7"    : "/open/doctor/obj/curebook",
		"amount10" : 1,
		"file4"    : "/open/ping/questsfan/obj/weaponmap",
		"amount9"  : 1,
		"amount8"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"file2"    : "/open/tailong/obj/six_book",
		"file9"    : "/open/mogi/castle/obj/blood-water",
		"amount2"  : 1,
		"file8"    : "/open/mogi/castle/obj/leave",
		"amount7"  : 1,
		"file5"    : "/open/tendo/obj/book2",
		"amount4"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/mogi/castle/obj/fire_book",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/gblade/obj/book",
	]) );
	set( "light_up", 1 );
	set( "build", 10152 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room139",
	]) );
        set("no_transmit",1);
        set("cmkroom",1);
        setup();
        replace_program(ROOM);
}
