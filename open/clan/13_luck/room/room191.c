inherit ROOM;
void create() {
	set( "short", "蚁王巢" );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room192",
	]) );
	set( "long", @LONG

　　一进到这里，随即闻到一股呛鼻的腥味，定神一看这里的四周散
布着许多小动物的尸骸及血迹，看起来满吓人的，你猜测这些应是蚁
王所吃完留下的尸骸。突然，你感到一股浓浓的杀气，原来蚁兵已发
现你的存在。心想，在不走就要成蚁王的食物了。

LONG);
	setup();
	replace_program(ROOM);
}
