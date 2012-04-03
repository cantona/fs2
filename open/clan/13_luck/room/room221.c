inherit ROOM;
void create() {
	set( "short", "三楼走道" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room222",
		"north"     : "/open/clan/13_luck/room/room220",
	]) );
	set( "long", @LONG

　　大战三百回合后，你好不容易将白滴子给打败了，来到锁龙塔第
三层的走道，空气中迷漫着浓浓的血腥味。此地墙上刻画着龙的图腾
，似乎是在述说着此地的故事，地上的骸骨无数，看来这里也是十分
的凶险，必需小心不要成为地上的骸骨之一。

LONG);
	setup();
	replace_program(ROOM);
}
