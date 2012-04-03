inherit ROOM;
void create() {
	set( "short", "血地狱" );
	set( "objects", ([
		"/open/clan/hell/npc/npc32" : 1,
		"/open/clan/hell/npc/npc31" : 1,
	]) );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room41",
		"up"        : "/open/clan/hell/room/room12.c",
		"enter"     : "/open/clan/hell/room/room61.c",
	]) );
	set( "long", @LONG
        的地狱景象之中....一时之间你被吓的魂飞魄散一步也不敢停留....
        机而动....但是你凭着本身高强的武功修为及与生俱来的勇气一步一
        步的向前探索....紧接着发现面前有一个怪异的地方....
        一个有如世界末日的景象出现在眼前....所有的景色都被淹没在血红
        的颜色当中....有着各式各样的残酷的画面....全部都淹没在这血红
        的地狱景象之中....一时之间你被吓的魂飞魄散一步也不敢停留....


LONG);
	setup();
	replace_program(ROOM);
}
