inherit ROOM;
void create() {
	set( "short", "$HIW$白无常说道：喂！新来的，你叫什么名字?$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room126.c",
		"east"      : "/open/clan/hell/room/room123.c",
		"up"        : "/open/clan/hell/room/room109",
		"south"     : "/open/clan/hell/room/room13.c",
	]) );
	set( "long", @LONG

白无常用奇异的眼光盯着你，好像要看穿你的一切似的。

白无常「哼”的一声，从袖中掏出一本像帐册的东西翻看着。

白无常閤上册子，说道：咦？阳寿未尽？怎么可能？

白无常搔了搔头，叹道：罢了罢了，你走吧。

一股阴冷的浓雾突然出现，很快地包围了你。

LONG);
	setup();
	replace_program(ROOM);
}
