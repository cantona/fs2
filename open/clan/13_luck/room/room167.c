inherit ROOM;
void create() {
	set( "short", "蚁窝" );
	set( "outdoors", "/open/clan/13_luck" );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room168",
		"down"      : "/open/clan/13_luck/room/room192",
	]) );
	set( "long", @LONG

　　一进到洞穴里，眼前出现的是一个巨大的蚂蚁窝，你差点被吓的
屁滚尿流。不知是这里环境好，还是不受打扰的原因，这里的蚂蚁竟
都大的像只猫一样，突然你发现几只工蚁从洞内下方深处不怀好意的
看着你，你感到一股杀气包围在你的四周。

LONG);
	setup();
	replace_program(ROOM);
}
