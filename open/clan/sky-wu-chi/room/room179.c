inherit ROOM;
void create() {
	set( "short", "地雷" );
	set( "owner", "hild" );
	set( "object", ([
		"amount7"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 1,
		"amount1"  : 2,
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file7"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/open/soldier/obj/blood",
		"file5"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount6"  : 1,
	]) );
	set( "build", 10382 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room283",
		"east"      : "/open/clan/sky-wu-chi/room/room168.c",
	]) );
	set( "long", @LONG
这房间跟天雷一样，五行八卦排列，但是这里有四大圣兽的石像有青龙
白虎、朱雀、玄武，这四大圣兽的排列位置让人觉得有一种，怪异的感
觉，好像这四大圣兽好像会幻化成真的一样，再加上这四大圣兽的雕刻
技术真是鬼斧神工，原来这是由ＨＩＬＤ运用内劲所雕刻出来的东西，
只要拥有高强的内力运在这四大神兽像，就会幻化成真的四大神兽。

LONG);
	setup();
	replace_program(ROOM);
}
