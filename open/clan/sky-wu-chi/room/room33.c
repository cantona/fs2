inherit ROOM;
void create() {
	set( "short", "   $HIR$你的眼前一黑，接着什么也不知道了....$NOR$" );
	set( "light_up", 1 );
	set( "build", 28 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room55.c",
	]) );
	set( "long", @LONG

你死了。

[31m阴曹入口[0m - 
    你已经来到了阴间的入口。虽然距离地府还有一段距离，但是你已经
感受到阵阵刺骨的阴风。四周一片荒凉，但是却鬼影幢幢，看来这边的夜
总会蛮热闹的，应该不愁没伴。南边和上面好像是和人世间相通的管道，
不过好像有一股无形的力量隔开这两个不同的世界，看来要从这两个方向
回去不是那么简单的事情。
    
LONG);
	setup();
	replace_program(ROOM);
}
