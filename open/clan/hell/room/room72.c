inherit ROOM;
void create() {
	set( "short", "$MAG$神丹$NOR$区" );
	set( "build", 10047 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room27",
	]) );
	set( "long", @LONG

hmm..神丹...不是那个加阿里不答的dan
是在你快去见白伯伯,能救你一命的仙丹...
在这人心险恶,狗咬狗的大染缸里...
行走江湖时最好随身携带几颗....
以备不时之需...
不过此丹不易取得...所以服用时要特别谨慎...
若能以如履薄冰的心态服用它的话...效果更加喔...

LONG);
	setup();
	replace_program(ROOM);
}
