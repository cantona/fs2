inherit ROOM;
void create() {
	set( "short", "$HIC$【$HIR$红叶$HIM$枫$HIG$树$HIY$林$HIC$】$NOR$" );
	set( "exits", ([
		"northeast" : "/open/clan/red_fire/room/room146",
		"southwest" : "/open/clan/red_fire/room/room143.c",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "long", @LONG
                　　　
        　　　　　　　　　　$HIM$◆◆◆$HIR$枫$HIG$叶$HIY$林$HIM$◆◆◆$NOR$□

        你一踏入这片$HIR$枫$HIG$叶$HIY$林$NOR$之中，发觉四周的$HIR$枫叶$NOR$不停的$HIW$飘落$NOR$，让你目不暇
        给，分不清楚$HIC$东$HIM$西$HIR$南$HIY$北$NOR$的方向，此刻你加紧脚步只想快速的通过，但
        是你走了一段路之后，不禁对这地方感到一阵$WHT$恐惧$NOR$！！四周的景色竟
        然完全一样！？......。


LONG);
	setup();
	replace_program(ROOM);
}
