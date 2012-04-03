inherit ROOM;
void create() {
	set( "short", "边城小站" );
	set( "object", ([
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount8"  : 1,
		"file8"    : "/open/prayer/obj/boris-boots",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/prayer/obj/boris-hat",
		"file4"    : "/daemon/class/fighter/figring",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount1"  : 1,
		"file2"    : "/daemon/class/fighter/figring",
		"amount3"  : 1,
		"amount10" : 1,
		"file3"    : "/open/capital/guard/gring",
		"amount9"  : 6,
		"amount5"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/castle/obj/ninepill",
	]) );
	set( "build", 10191 );
	set( "light_up", 1 );
	set( "owner", "tsrak" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room98",
		"enter"     : "/open/clan/13_luck/room/room145",
	]) );
	set( "long", @LONG
    这里是边城的房间屋,里面只有一张木床和一幅挂像
仔细看看挂像,发现里面的人物还会对你招招手,再看人已
经消失了,床上放着一只扫把和一本书,扫把上刻着光轮2002
你拿起书看了一看,书皮写着高级黑魔法,而书里面尽是一些
蝌蚪文,一不小心就被书咬了一口.挂像旁边有一个小通道,
似乎通往另一个房间,当你要进去的时候,挂像突然出现一只
小精灵对你要着口令....

LONG);
	setup();
	replace_program(ROOM);
}
