inherit ROOM;
void create() {
	set( "short", "地牢" );
	set( "light_up", 1 );
	set( "build", 10200 );
	set( "owner", "suzukiami" );
	set( "exits", ([
		"up"        : "/open/clan/demon_castle/room/room12",
	]) );
	set( "long", @LONG
这里是一个地牢
小二用来关抓到的各种奇珍异兽的
在这里你看到了皮卡丘..波克比...
居然还有可达鸭
另外一头还有两只术码宝贝
仔细一看居然是钢铁加鲁鲁和战斗暴龙兽门口有一只守门人
它只会一直说就是这样的..原来是果然翁
LONG);
	setup();
	replace_program(ROOM);
}
