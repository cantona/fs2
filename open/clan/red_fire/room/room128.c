inherit ROOM;
void create() {
	set( "short", "$HIC$【$YEL$黄土$HIW$路$HIC$】$NOR$" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room138",
		"south"     : "/open/clan/red_fire/room/room127.c",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "long", @LONG
雨天过后，你走到一条满地$YEL$泥泞$NOR$的野外$HIW$小路$NOR$，顿时心中感到一阵不悦
，但是你的$HIR$冒险$HIM$精神$NOR$依然使你继续向前迈进；可是你却发觉真的是寸步难
行，心中泛起了一股想往回走的念头。就在此时，你却发现$HIC$北方$NOR$有一座$HIY$树
林$NOR$，使你想要进去走走，并且你也加快了脚步，想要赶快离开这举步艰难
的$WHT$鬼地方$NOR$。


LONG);
	setup();
	replace_program(ROOM);
}
