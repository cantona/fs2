inherit ROOM;
void create() {
	set( "short", "$HIC$威洛$NOR$的$HIM$藏$HIY$经$HIW$阁$NOR$" );
	set( "owner", "welo" );
	set( "build", 10217 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room68",
	]) );
	set( "long", @LONG

四周的$HIW$书柜$NOR$让你直觉这里是一间书房，没错！这是$HIC$威洛$NOR$
的$HIM$藏$HIY$经$HIW$阁$NOR$柜子里面摆满了威洛到处买来或要来的$HIR$武$HIG$功$HIY$密$HIC$
笈$NOR$，几个醒目的大字吸引着你的目光$HIW$'太极剑法' $HIC$'倚天
剑法' $HIR$'辟邪剑谱'$NOR$想不到$HIC$威洛$NOR$连这些失传已久的$HIY$密笈$NOR$都
能拥有，只见这里打扫的一尘不染，或许可以当成$HIR$红莲
教$NOR$未来的$HIW$图书馆$NOR$。


LONG);
	setup();
	replace_program(ROOM);
}
