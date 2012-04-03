inherit ROOM;
void create() {
	set( "short", "$HIR$剑冢$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"amount1"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "build", 11804 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28.c",
	]) );
	set( "long", @LONG
这里是天下剑客手中之剑的最终去处,当主人以死,剑灵便会被阎罗王招至此处
以此为坟,阎罗王也常将他从四处搜罗回来的神剑收藏于此处,所以正常人踏进此处
不但会马上立感剑气冲天,若有修为不够深厚者,甚至会被此处的剑气所伤,相传阎罗
王想收集全天下奇剑,尽藏于此

LONG);
	setup();
	replace_program(ROOM);
}
