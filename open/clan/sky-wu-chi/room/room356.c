inherit ROOM;
void create() {
	set( "short", "盖大楼" );
	set( "owner", "biwem" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room355",
	]) );
	set( "long", @LONG
 想到此地，岁月如湾月 瞬息万变
青露露的草地 花草树木千百繁华
白云涟波衬蓝天 暖风飕飕瞋眼帘
业主无情 盖大楼房间 瞬息万变
黄滚滚的沙地 水泥钢筋黄沙尘土
烈阳炽炽于天 燥气冲天却寒心
     盖大楼 盖大楼
业主欢喜 孩儿忆同年新屋子盖好 房客如潮水
小王 :「老爷！老家一伙儿，都靠老爷您了。”
LONG);
	setup();
	replace_program(ROOM);
}
