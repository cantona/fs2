inherit ROOM;
void create() {
	set( "short", "雅雅小筑" );
	set( "build", 10463 );
	set( "owner", "asia" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room342",
	]) );
	set( "long", @LONG

    这是宝贝雅雅的闺房，留有着前世记忆的宝贝雅雅，在房间里面挂
满了好友的画像，有着宝贝雅雅无限的回忆。每每看着这些画就会回想
起，那些没事就与好友们，一起去杀龙回来烤肉，不然就是去跟焚天魔
王借头回来踢足球，再不然就是找独孤嵊要几个替身人偶来演圣石传说
，此次的重生，宝贝雅雅也要在这自己的小天地内不停的，把自己功力
提升，再次去云游四海闯荡江湖。

LONG);
	setup();
	replace_program(ROOM);
}
