inherit ROOM;
void create() {
	set( "short", "$HBCYN$天晶结界$NOR$" );
	set( "light_up", 1 );
	set( "build", 10349 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room29",
	]) );
	set( "long", @LONG
传说中书生最好的装备,虹晶装备全套,虽然是针对书生设计的,但其实对于其他
门派来说,其实也是不错的防身装备.所以帮主平时特别准备三套此种装备,置于此结
界中,让帮众在偷懒或是紧急的时候可以来此拿取,结界的顶端刻着帮主的叮咛,希望
帮众使用完后都能自动归还

LONG);
	setup();
	replace_program(ROOM);
}
