inherit ROOM;
void create() {
	set( "short", "小白菜的沉壁房" );
	set( "object", ([
		"file8"    : "/open/love/obj/cloth1",
		"file1"    : "/open/killer/weapon/k_torch",
		"amount8"  : 1,
		"amount1"  : 1,
	]) );
	set( "owner", "sski" );
	set( "build", 10050 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room228",
	]) );
	set( "long", @LONG
这里你进来一看,我想你就完全知道这里是装了什么东西了
看到了一堆堆小小短短的匕首,而且感觉到他的寒气..你不知
不觉就想要拿起来一看,嗯..原来这就是皇族的人才会有的独
门武器叫沉璧(moon dagger)...你不禁的想拿起来试试看手
感..只是你好像拿不起来似的..因为这些匕首似有人性的样子

LONG);
	setup();
	replace_program(ROOM);
}
