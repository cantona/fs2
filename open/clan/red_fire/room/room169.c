inherit ROOM;
void create() {
	set( "short", "$HIC$高层会议厅$NOR$" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "long", @LONG
这理是红莲教暂时的高层会议厅....
厅中的摆设非常的富丽堂皇.........但是这里
一般人是不能进去.....只有帮中的爱玫教主
召集高层开会时才能进去.....其他的帮众
想要参与的......除非经过高层授权
或教主亲自召见......才能进来一窥究竟


'.
LONG);
	setup();
	replace_program(ROOM);
}
