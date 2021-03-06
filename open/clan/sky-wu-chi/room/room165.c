inherit ROOM;
void create() {
	set( "short", "$HIY$【平南书院】 $HIC$圣贤学堂$NOR$" );
	set( "owner", "lonsan" );
	set( "object", ([
		"amount5"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/daemon/class/fighter/figring",
		"amount7"  : 1,
		"amount8"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file10"   : "/open/tendo/obj/chaosbelt",
		"amount6"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount4"  : 1,
		"file6"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "light_up", 1 );
	set( "build", 10300 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room139",
	]) );
	set( "long", @LONG
走进圣贤学堂，马上就可以感受到一股读书人的气质，仿佛只要从这里出去的
学生，都能成为当代的文学大师，事实上也是如此，平南书院的圣贤学堂就是专门
训练文人学士作学问的最高殿堂，在这里任教的老师们也都是当代的大儒，这里要
求也比一般的书院来的严格，不但想进来要接受考试，在里面跟不上别人程度的学
生，也多如过江之鲫，不过就算因为跟不上进度被开除的学生，在外面一样能独当
一面的研究学问。在学堂的两侧各有一排柜子，是在这里上课的学生专用的，而讲
堂前方的小书柜里面放的是老师的私人物品。

LONG);
	setup();
	replace_program(ROOM);
}
