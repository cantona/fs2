inherit ROOM;
void create() {
	set( "short", "红尘居三楼" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room115",
	]) );
	set( "long", @LONG

    凌空渡虚，御气而行，漫步走至红尘居三楼。回想自己的过去，
从一个武学门外汉，一路苦练至今武学修为终于达到顶峰，为求武功
更为精进，故来到武林高手群众的此地，盼能受到武林前辈的指导，
以再突破自身的极限。

LONG);
	setup();
	replace_program(ROOM);
}
