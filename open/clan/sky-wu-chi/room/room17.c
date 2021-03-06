inherit ROOM;
void create() {
	set( "short", "$HIB$【$HIC$圣  石  碑$HIB$】$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"D"         : "/open/clan/sky-wu-chi/room/room91.c",
		"Y"         : "/open/clan/sky-wu-chi/room/room60.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"Q"         : "/open/clan/sky-wu-chi/room/room48.c",
		"V"         : "/open/clan/sky-wu-chi/room/room64.c",
		"B"         : "/open/clan/sky-wu-chi/room/room19.c",
		"O"         : "/open/clan/sky-wu-chi/room/room93",
		"F"         : "/open/clan/sky-wu-chi/room/room34.c",
		"U"         : "/open/clan/sky-wu-chi/room/room65.c",
		"W"         : "/open/clan/sky-wu-chi/room/room63.c",
		"N"         : "/open/clan/sky-wu-chi/room/room47.c",
		"R"         : "/open/clan/sky-wu-chi/room/room37.c",
		"L"         : "/open/clan/sky-wu-chi/room/room55.c",
		"X"         : "/open/clan/sky-wu-chi/room/room62.c",
		"J"         : "/open/clan/sky-wu-chi/room/room58.c",
		"S"         : "/open/clan/sky-wu-chi/room/room36.c",
		"H"         : "/open/clan/sky-wu-chi/room/room26.c",
		"E"         : "/open/clan/sky-wu-chi/room/room29.c",
		"I"         : "/open/clan/sky-wu-chi/room/room92.c",
		"M"         : "/open/clan/sky-wu-chi/room/room51.c",
		"P"         : "/open/clan/sky-wu-chi/room/room43.c",
		"C"         : "/open/clan/sky-wu-chi/room/room35.c",
		"Z"         : "/open/clan/sky-wu-chi/room/room71.c",
		"G"         : "/open/clan/sky-wu-chi/room/room28.c",
		"K"         : "/open/clan/sky-wu-chi/room/room57.c",
		"T"         : "/open/clan/sky-wu-chi/room/room68.c",
		"A"         : "/open/clan/sky-wu-chi/room/room13.c",
	]) );
	set( "long", @LONG
相传,上古时代,因为天上的作乱人间,导致民不聊生,兵荒马乱,
这时有二十六位[0;1;34m□[1mj[1m□[1mt[1m□[1m□[0m为了抵抗天神的作弄,奋而群起抵抗,在
一位拥有妖刀的邪燕领导下,跟诸位天神大战,但还是不敌天上
的诸神这时众古圣者决定~~以牺牲自我,还换取狂想空间的和平,
在二十六道飞过天际时,天上众神被重创了...但古圣者也因放出
毕生的功力使他们化为灰烬...在邪燕的传人<[0;1;36m□[1mM[1m□[1m□[1m□[1mP[1m□[1mJ[0m>的奔走下
终于收集到了二十六位古圣者的遗骸....并且用毕生所学,化成了
二十六颗传送石...只要你诚心呼唤圣者之名...你便可以传送到
[0;1;33m□[1mt[1m□[1m□[1m□[1m□[1m□[1m□[0m去了....                                欣
LONG);
	setup();
	replace_program(ROOM);
}
