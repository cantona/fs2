inherit ROOM;
void create() {
	set( "short", "真-七彩水晶结界" );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 12012 );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room151",
	]) );
	set( "long", @LONG
你走进了这里，发现了‘空瓶子’的练功最大秘密。那就是来自于这屋
顶上头对准的七彩水晶，它所发射出来的光芒正好射在这个屋子的中间。你
因为好奇想去看看那光芒到底是什么，你渐渐走了过去。就在你照射到那光
芒的同时，你感到身体痛苦万分。原来那光芒的热度比起地底下的那熔岩冰
床还要热，你不津的芒然起来。为什么你不能在那光芒底下练功呢，原来原
因就是你没有穿‘虹晶’的万年宝物。只是你也不知道要重何找起了。
LONG);
	setup();
	replace_program(ROOM);
}
