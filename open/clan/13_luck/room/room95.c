inherit ROOM;
void create() {
	set( "short", "十三辣妈小仓库" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room94",
	]) );
	set( "long", @LONG
仓库门前有小河,后面有山坡,山坡上野花多,野花红似火,小河里有白鹅,
鹅鹅戏绿波,戏弄绿波,鹅鹅快乐,昂头tin force...=.= 
    你发现门上挂着牌子,上面写着:UO黑刺王的复仇...
                                网路创世纪...

LONG);
	setup();
	replace_program(ROOM);
}
