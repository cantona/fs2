inherit ROOM;
void create() {
	set( "short", "$HIY$阿琳$HIM$公益彩券$NOR$" );
	set( "object", ([
		"amount3"  : 2598959,
		"file3"    : "/open/marksman/obj/arrow-3",
		"amount2"  : 1,
		"file4"    : "/open/doctor/pill/human_pill",
		"amount4"  : 58,
		"amount5"  : 289,
		"amount1"  : 1,
		"file5"    : "/open/doctor/pill/ice_pill",
		"file1"    : "/open/marksman/obj/dragon_bow",
		"file2"    : "/open/marksman/obj/bow-5",
	]) );
	set( "owner", "kalin" );
	set( "build", 10382 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room54.c",
		"west"      : "/open/clan/hell/room/room43",
		"east"      : "/open/clan/hell/room/room50.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

kalin自从退隐山湖后...
就把一切事务交给鼻屎男大飞去管理..
平常没事..就是溜溜鸟
当然..玩鸟也是要有本钱的..
除了靠小弟大飞定时纳贡的保护费□..
阿琳响应政府的良政..
卖起公益彩券来了...
如果哪天你在台北车站□..
看到一位风流倜傥的美男子在卖彩券
不要怀疑..那就是kalin..
记得多给他捧场喔...
LONG);
	setup();
	replace_program(ROOM);
}
