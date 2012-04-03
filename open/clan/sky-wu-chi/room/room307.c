inherit ROOM;
void create() {
	set( "short", "伊耳谜的小卧室" );
	set( "owner", "erme" );
	set( "light_up", 1 );
	set( "build", 10250 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room299",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
这儿就是伊耳谜的小小天地了。迷人的音乐从 CD 音响里轻轻传来，
房间中央摆着一张小圆桌，桌上放了好多好多好多的又香又脆又甜
的饼干和各种可口的西式小茶点...。 哇！好好吃好好吃的样子，
口水都要流出来了！右边的原木地板上还放满了柔软的懒骨头和可
爱的蚕丝抱枕，凉风夹带着淡淡的桂花清香从后方的院子里徐徐的
吹来，而飘逸的落地白纱窗帘外，温暖的金色阳光正与绿树儿翩翩
起舞，真是一个优闲慵懒、适合大家聚在一块儿细细品茶、谈天说
地的午后...。
LONG);
	setup();
	replace_program(ROOM);
}
