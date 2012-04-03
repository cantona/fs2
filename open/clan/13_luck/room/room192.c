inherit ROOM;
void create() {
	set( "short", "蚁窝" );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room167",
		"down"      : "/open/clan/13_luck/room/room191",
	]) );
	set( "long", @LONG

　　洞穴里工蚁忙进忙出的搬着牠们的胜利品，往里头走去，看样子
似乎是要搬到蚁王巢去给蚁王食用的。血淋淋的动物尸体，血迹一直
往内沿伸，使的空气中充满着一股难闻的腥味。突然，好几只工蚁充
满敌意的瞪着你，你感到一股杀气包围在你的四周围。

LONG);
	setup();
	replace_program(ROOM);
}
