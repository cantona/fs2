inherit ROOM;
void create() {
	set( "short", "$HIR$小凯蒂$NOR$的$HIM$闺房$NOR$" );
	set( "build", 10318 );
	set( "owner", "kitty" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room82",
	]) );
	set( "long", @LONG

这里是$HIR$小凯蒂$NOR$的$HIM$闺房$NOR$,你一走进这里眼里看到的全是$HIR$小凯蒂$NOR$的
家族成员有$HIC$凯蒂爸$NOR$、$HIR$凯蒂妈$NOR$、$RED$凯蒂姊$NOR$、$HIM$凯蒂妹$NOR$、$HIB$凯蒂哥$NOR$、$HIG$凯蒂
弟$NOR$等。这里欢迎$HIR$小凯蒂$NOR$的好朋友来玩。不过如果你怀有恶意ㄉ
话，嘿嘿....$HIR$小凯蒂$NOR$一家人可不是好欺负的，他们可是会对你
伸出$HIY$猫爪$NOR$ㄉ唷。


LONG);
	setup();
	replace_program(ROOM);
}
