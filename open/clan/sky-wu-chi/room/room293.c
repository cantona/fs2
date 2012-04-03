inherit ROOM;
void create() {
	set( "short", "秘密药房" );
	set( "owner", "amei" );
	set( "object", ([
		"amount10" : 1,
		"file10"   : "/open/magic-manor/obj/maun-shadow-blade",
		"file2"    : "/open/doctor/pill/gnd_pill",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 24,
		"amount2"  : 245,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"file3"    : "/open/doctor/item/sick_item",
		"amount5"  : 41,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 354,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/doctor/item/sick_item",
		"file1"    : "/open/doctor/pill/sky_pill",
		"file9"    : "/open/gblade/obj/dragon_book",
		"amount4"  : 1510,
	]) );
	set( "build", 10815 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room286.c",
		"east"      : "/open/clan/sky-wu-chi/room/room233.c",
		"back"      : "/open/clan/sky-wu-chi/room/room251",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"north"     : "/open/clan/sky-wu-chi/room/room292.c",
	]) );
	set( "long", @LONG
这里是AMEI的秘密药房，这里摆满了救命三灵丹这些丹药十分的珍贵
，假如你没有得到同意别随便乱拿O，尤其是帮里需要去打大魔王时一定
会用到这些丹药，不过你有急需的话也可以跟AMEI说一声她会拿些给你的
千万不要自己拿O.......
LONG);
	setup();
	replace_program(ROOM);
}
