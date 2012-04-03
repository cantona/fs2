inherit ROOM;
void create() {
	set( "short", "$HIY$【$HIR$红莲$HIC$护城河 $HIM$南门大桥$HIY$】$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "light_up", 1 );
	set( "build", 11120 );
	set( "exits", ([
		"westdown"  : "/open/clan/red_fire/room/room65",
		"eastdown"  : "/open/clan/red_fire/room/room64",
		"south"     : "/open/clan/red_fire/room/room44.c",
	]) );
        set( "long", @LONG
你站在$HIM$桥上$NOR$，向下望着$HIC$护城河$NOR$，好清澈的河水啊，疑？....河底好像
刻了一些$HIW$字$NOR$，怪哉？！是谁有那么大的能耐潜入河水中刻$HIW$字$NOR$啊？真想跳下
去看一看......呵呵呵！......$HIY$东西$NOR$两边都有耶！先跳哪一边啊？！....
..跳下去还起的来吗？......管他的，跳了再说！！


LONG);
        setup();
        replace_program(ROOM);
}

