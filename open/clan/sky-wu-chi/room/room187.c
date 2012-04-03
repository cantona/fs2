inherit ROOM;
void create() {
	set( "short", "$HIC$欣$HIR$□$HIY$防具所$HIB$II$NOR$" );
	set( "owner", "lts" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room109",
		"west"      : "/open/clan/sky-wu-chi/room/room169.c",
	]) );
	set( "light_up", 1 );
	set( "object", ([
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/dancer/obj/linrboots",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"file10"   : "/open/capital/guard/gring",
		"amount9"  : 1,
		"file2"    : "/daemon/class/blademan/obj/ublade",
		"file7"    : "/open/killer/obj/k_ring",
		"file3"    : "/open/killer/obj/k_ring",
		"file4"    : "/open/dancer/obj/yuawaist",
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"amount5"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/sky/obj/lucky_grasslink",
	]) );
	set( "build", 10515 );
	set( "long", @LONG
   这里是[0;1;36m□[1m][1m□[1m□[1m□[1mU[1m□[1m□[1m□[1mY[0m的防具所,所有防具都整齐划一的排列在防具所里
每个防具都闪亮着他们的[0;1;33m□[1m□[1m□[1m~[0m,导致整各房间[0;1m□[1m{[1m□[1m{[1m□[1mo[1m□[1mG[0m,你看到里面所
收藏的妖幻防具..不禁啧啧称其......所有的防具在欣提刀作战时,则
给了欣一道强劲的防护.....
vv
LONG);
	setup();
	replace_program(ROOM);
}
