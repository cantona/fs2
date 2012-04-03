inherit ROOM;
void create() {
	set( "short", "简单爱" );
	set( "owner", "woan" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room326.c",
		"west"      : "/open/clan/13_luck/room/room327",
	]) );
	set( "object", ([
		"file7"    : "/open/capital/obj/blade2",
		"amount3"  : 16,
		"amount6"  : 1,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 15,
		"file3"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "build", 14106 );
	set( "light_up", 1 );
	set( "long", @LONG
    说不上为什么，我变得很主动，若[0;1;31m□[1mR[0m上一个人，什么都会
值得去做，我想大声宣布，对你依依不舍，连隔壁邻居都猜到
我现在的感受，河边的风，在吹着头发飘动，牵着你的手一阵
莫名感动，我想带你，回我的外婆家，[0;1;34m□[1m@[1m□[1m_[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[0m，一直到
我们都睡着，我想就这样牵着你的手不放开，爱能不能够永远
单纯没悲哀，我，[0;1;5;36m□[1;5mQ[1;5m□[1;5mM[1;5m□[1;5mA[1;5m□[1;5mM[1;5m□[1;5m□[1;5m□[1;5m□[0m，我，[0;1;5;33m□[1;5mQ[1;5m□[1;5mM[1;5m□[1;5mA[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5my[0m，像这样
[0;1;32m□[1mS[1m□[1m□[1m□[1m~[0m，[0;1;36m□[1m□[1m□[1m□[1m□[1mq[0m，[0;1;35m□[1m@[1m□[1m□[1m□[1m□[0m，我想就这样牵着你的手不放开，[0;1;31m□[1mR[0m
可不可以[0;1;4;34m□[1;4m□[1;4m□[1;4m□[1;4m□[1;4m□[1;4m□[1;4m□[0m没有伤害，你靠着我的肩膀，你在我胸口睡
着，像这样的生活，我[0;1;31m□[1mR[0m你，你[0;1;31m□[1mR[0m我。 

               [0;1;36m□[1mQ[0m [0;1;5;32m□[1;5m□[1;5m□[1;5mI[1;5m□[1;5m□[1;5m□[1;5mI[1;5;35m□[1;5m□[1;5m□[1;5mI[1;5m□[1;5m□[1;5m□[1;5mI[0;1;37m [1;31m□[1mR[0m

     　　　　　[0;1;36m□[1mQ[0m [0;1;5;32m□[1;5m□[1;5m□[1;5mI[1;5m□[1;5m□[1;5m□[1;5mI[1;5;35m□[1;5m□[1;5m□[1;5mI[1;5m□[1;5m□[1;5m□[1;5mI[0m [0;1;31m□[1mR[1m [1m [0m


LONG);
	setup();
	replace_program(ROOM);
}
