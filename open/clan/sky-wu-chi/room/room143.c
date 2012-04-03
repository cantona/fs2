inherit ROOM;
void create() {
	set( "short", "霸气堂底" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "owner", "ywarter" );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room151",
	]) );
	set( "long", @LONG
这里是‘空瓶子’的地底练功场所。并没有怎样的特别，只是有一张床
罢了。你走过去摸了一下，吓到了。原来那是张万年寒冰床，且在看其冰床
的中间没想到居然会是引那‘飞来峰’上的熔岩，你开始感到这位主人的威
力了。到了这里你却只有一个念头，那就是赶紧逃跑，以免被这位主人所发
现，而把你杀人灭口。以免你知道太多。但是你确定你有办法能够跑出这个
地方吗，我不禁的怀疑了起来。
LONG);
	setup();
	replace_program(ROOM);
}
