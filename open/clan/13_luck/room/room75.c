inherit ROOM;
void create() {
	set( "short", "混世间二房" );
	set( "build", 10086 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room104",
		"south"     : "/open/clan/13_luck/room/room71",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

　　来到林口华亚科园大门，进去看到那有如老兵一样爽的华亚警卫
在走进去看到有如魔鬼般的海军陆战队广达，在往前走将会看到有如
陆军精诚连的神达，旁边有一间很大的神达EMCLAB营区，我就在里面
当着最菜的助工二兵，一部部不起眼却有如天价的仪器枪械跟一大堆
身价不凡的破铜烂铁装备，天天拿着他们去刺枪保养跑三千，这就是
我的家，我的营区。

LONG);
	setup();
	replace_program(ROOM);
}
