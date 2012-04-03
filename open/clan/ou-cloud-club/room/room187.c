inherit ROOM;
void create() {
	set( "short", "$HIB$麒麟甲$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/common/obj/liz_meat",
		"file2"    : "/obj/gift/xiandan",
		"file3"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file7"    : "/open/common/obj/liz_meat",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/common/obj/liz_meat",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount2"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file6"    : "/open/common/obj/liz_meat",
	]) );
	set( "light_up", 1 );
	set( "build", 10089 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room186",
		"west"      : "/open/clan/ou-cloud-club/room/room169.c",
	]) );
	set( "long", @LONG
    $HIR$传说中古代麒麟身上护甲所制成，具强大的防御力$NOR$


$WHT$扑击格斗技巧(unarmed)          技能效应： 3$NOR$
$WHT$拆招卸力之术(parry)            技能效应： 4$NOR$


此为风林山寨的二寨主...刘信的贴身至宝
怎么会在这边呢.....原来前些日子刘信的死...
是小马所为....
LONG);
	setup();
	replace_program(ROOM);
}
