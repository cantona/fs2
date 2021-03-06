inherit ROOM;
void create() {
	set( "short", "[1;34mPACIFIC BLUE[0m" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/soil-ball",
		"amount8"  : 1,
		"file7"    : "/open/magic-manor/obj/water-ball",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/fire-ball",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/magic-manor/obj/wood-ball",
		"file3"    : "/open/magic-manor/obj/golden-ball",
		"file2"    : "/open/doctor/obj/d-mark",
		"amount2"  : 1,
		"file8"    : "/open/doctor/obj/feather",
		"amount1"  : 1,
	]) );
	set( "owner", "del" );
	set( "build", 10060 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room251.c",
	]) );
	set( "long", @LONG
      
作曲家乔那斯．克凡史东与史蒂芬．舒曼两人的完美演出，将每一
个浪起潮退起伏，生动纪录，浪起的澎湃节奏，簇拥着急转直下的
潮退静谧；仿佛置身浩瀚大海，随着鲸航的律动和宛如轻骑的海豚
呼唤，勾勒出荡漾心房的音乐旋律，带领心灵回到最原始的境地。
  
LONG);
	setup();
	replace_program(ROOM);
}
