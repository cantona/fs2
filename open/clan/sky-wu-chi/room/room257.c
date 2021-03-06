inherit ROOM;
void create() {
	set( "short", "小昭的窝" );
	set( "object", ([
		"file8"    : "/open/ping/questsfan/obj/diamond_legging",
		"file6"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount5"  : 1,
		"file1"    : "/open/sky/obj6/sun_diamond",
		"amount1"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount7"  : 1,
		"file2"    : "/open/gsword/obj/yugem",
		"amount9"  : 1,
		"file10"   : "/open/capital/guard/gring",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10733 );
	set( "light_up", 1 );
	set( "owner", "anaid" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
这儿就是小昭的房间，在这里有一种令人十分舒服的感觉，地上铺设着虎皮条纹的地毯，显示出这里主人的风格，墙上挂着一张真人般大小的女人照片，下面写着几个字~$HIR$我的达令$NOR$~，在你的左手边有一个水族箱，里面养的鱼你从来都没有看过，右边的原木地板上还放满了柔软的懒骨头和可爱的蚕丝抱枕，凉风夹带着淡淡的桂花清香从后方的院子里徐徐的吹来，而飘逸的落地白纱窗帘外，温暖的金色阳光正与蝴蝶翩翩起舞，真是一个优闲慵懒、适合大家聚在一块儿细细品茶、谈天说地的午后...。
LONG);
	setup();
	replace_program(ROOM);
}
