inherit ROOM;
void create() {
	set( "short", "$HIY$魔龙鳞$HIW$之界$NOR$PART1" );
	set( "light_up", 1 );
	set( "build", 10720 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room56.c",
		"west"      : "/open/clan/hell/room/room23.c",
	]) );
	set( "long", @LONG
当帮中得到魔龙鳞片的时候,帮主会将之存放于此处,除了纪念杀死甲龙的功绩
之外,也可以再情况紧急的时候,将帮众们送到魔界,除此之外,偶而还可以拿来当做
制造武器之用,你仔细一看,发觉这里四周都是闪闪发亮的鳞片,辉映着地狱的火光
不禁让你对地府的实力重新估计

LONG);
	setup();
	replace_program(ROOM);
}
