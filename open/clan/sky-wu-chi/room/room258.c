inherit ROOM;
void create() {
	set( "short", "夜梦宫" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room243",
	]) );
	set( "object", ([
		"file3"    : "/open/sky/obj1/wind_emblem",
		"amount3"  : 1,
	]) );
	set( "build", 10054 );
	set( "long", @LONG
这里是位于湖心小筑的中心,空气中散布着阵阵的花香和异常强大的灵力,
强大的灵力仿佛形成一道无形的防护结界,不轻易让外来客进出,四周的动
植物们似乎不是非常的欢迎外来客的到访,前方的黑影像是一个人,而黑影
的后面是一座美轮美奂的建筑物,你忽然想到前面就是传说中的夜梦宫,
而那道黑影想必就是---夜梦宫宫主--「千水凝冰”--剑如冰.
LONG);
	setup();
	replace_program(ROOM);
}
