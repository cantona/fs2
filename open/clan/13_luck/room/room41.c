inherit ROOM;
void create() {
	set( "short", "客栈左厅" );
	set( "object", ([
		"file1"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
	]) );
	set( "build", 10317 );
	set( "exits", ([
		"凤凰楼"    : "/open/clan/13_luck/room/room99",
		"east"      : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    欢迎您来到十三吉祥的客栈左厅，请先向柜枱的店小二CHECK IN
办理好手续后，您就可以回到妳的厢房休息了，如有需要任何服务请
直拨CT频道将有专人为您服务～～
                                               谢谢光临 ！！

             
               从这往前走，即是‘凤凰楼’。
             
LONG);
	setup();
	replace_program(ROOM);
}
