inherit ROOM;
void create() {
	set( "short", "体能训练场" );
	set( "owner", "rue" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room242",
		"east"      : "/open/clan/sky-wu-chi/room/room288.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
一踏入这个房间，你第一个感觉是‘哇！好安静呀！’宽广的房间里面却
没有一点声音，你开始放松心情环顾四周，房间正中央的墙壁上有着帮主亲题
的‘武’字，两旁还摆着帮中长老所传下来的武功秘笈(Secretbook)你迫不及
待的走向前翻阅，正当你醉心于秘笈的内容时，突然间左边冒出一股掌风，接
着右边冲出一道剑气，你还来不及反应就被吓得冒出一身冷汗来，这时只见一
个人慢慢走了出来，朝你的周身大穴点了几下，你顿时感到一股暖流灌入了体
内，仔细一看，原来各种职业的帮员都在这里练功，你不禁好奇的想加入他们
的行列，开始集中精神修练。
LONG);
	setup();
	replace_program(ROOM);
}
