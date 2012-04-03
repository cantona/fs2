inherit ROOM;
void create() {
	set( "short", "$HIB$楳$HIC$表$NOR$" );
	set( "object", ([
		"file2"    : "/daemon/class/fighter/figring",
		"amount1"  : 1,
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/prayer/obj/kylin-belt",
		"file1"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "breeze" );
	set( "build", 10114 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room227",
		"west"      : "/open/clan/ou-cloud-club/room/room197",
	]) );
	set( "long", @LONG
$HIC$　　　　　　　　　　　　　　　冫　指　�G　冖　��　椀　

$HIC$　　　　　　　　　　　　　　　　　貧  心　痛　��　竺　卆

$HIC$　　　　　　　　　　　　　　　　　涙　爺　匯　晩　賠　匚

$HIC$                                  伉　縞　蕗　竃　�罅＾�

$HIC$　　　　　　　　　　　　　　　　　堝　和　表　音　伴　廉

　　　　　　　　　　　　　　　　　�燹「弌）�　需　萱　冫

$HIC$　　　　　　　　　　　　　　　　　幟　送　駄　繁　幢　凡

$HIW$　　　　　　　　　　　　　　　　　。　��　。　��　。　��
LONG);
	setup();
	replace_program(ROOM);
}
