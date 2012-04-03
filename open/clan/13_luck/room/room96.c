inherit ROOM;
void create() {
	set( "short", "红尘居" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room129",
		"up"        : "/open/clan/13_luck/room/room115.c",
		"out"       : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "long", @LONG

$HIC$桌上摆着一杯茶，喝了一口阵阵清香味散满了四周，这种感觉真是舒
服，飘落的花雪在空中慢慢的落下，寒风潇潇更增加了几分冷意，霜
雪盖满了$HIR$「红尘居”$HIC$的屋顶，十三吉祥最高殊荣尽皆于此，踏进门口
往前一看，你不禁骇然一声，原来墙上高挂了二行字正是∶$NOR$

       $HIW$～～天下群雄何其多～～$NOR$
                               $HIW$～～$HIY$十三吉祥$HIW$傲群雄～～$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
