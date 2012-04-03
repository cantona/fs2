inherit ROOM;
void create() {
	set( "short", "$HIW$小马$NOR$的$HIG$家$NOR$" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount8"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount3"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/capital/obj/blade2",
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount7"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "freaky" );
	set( "light_up", 1 );
	set( "build", 11700 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room143",
		"west"      : "/open/clan/ou-cloud-club/room/room135.c",
	]) );
	set( "long", @LONG
           无题

相见时难别亦难
  东风无力百花残
    春蚕到死丝方尽
      蜡炬成灰泪始干
    晓镜但愁云鬓改
  夜吟应觉月光寒
蓬莱此去无多路


~~~~青鸟殷勤为探看

此为本屋主的心情写照.....

一进门看见了有个人眼神空洞的望着窗□...嘴里喃喃自语的念着此诗
看似冷酷的外表其实..内心热切的希望寻觅到相知相守的另一伴~~.
LONG);
	setup();
	replace_program(ROOM);
}
