inherit ROOM;
void create() {
	set( "short", "岩岸" );
	set( "exits", ([
		"down"      : "/open/clan/hell/room/room135",
		"east"      : "/open/clan/hell/room/room94.c",
	]) );
	set( "long", @LONG
海水打在岸边的岩石上,不断地溅起一波波的水花,这里的石头成年被海水
侵蚀,上面布满了大大小小的洞,而且异常滑溜,想在上面行走,轻功必要有一定
的水准,否则很容易落海而死,站在比较高的石块往岛上望去,似乎在东边有一片
比较平坦的沙岸,岩岸的北边是一面峭壁.

LONG);
	setup();
	replace_program(ROOM);
}
