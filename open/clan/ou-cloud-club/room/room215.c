inherit ROOM;
void create() {
	set( "short", "$HIR$天$NOR$　$HIC$之$NOR$　$HIM$劫　$NOR$" );
	set( "owner", "kent" );
	set( "build", 11244 );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room243",
		"east"      : "/open/clan/ou-cloud-club/room/room214",
		"west"      : "/open/clan/ou-cloud-club/room/room241.c",
	]) );
	set( "long", @LONG

当秋天　再来的时候　　妳要我　笑着去爱去拥有
就算是　再短暂的温柔　能重逢　这仁慈已足够
可知道　有些事有些人　停留在　发生的那天不肯走

看时光的残酷　　舍不得被遗忘　这命运我很满足
有妳陪伴的幸福　为妳打开时间的锁

让爱自由　不被它束缚　是哭过　也挣扎过　心让痛辗过
等那一天　落叶静静飘眼前　已不再伤悲　永恒终于相信了幸福的瞬间

为妳打开　时间的锁　让爱自由　不被它束缚　每一秒　都不后悔
我陪妳体会　过去未来　轻轻重叠　请原谅甜甜的眼泪
感谢今生与妳在　幸福的瞬间　依偎

LONG);
	setup();
	replace_program(ROOM);
}
