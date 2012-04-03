inherit ROOM;
void create() {
	set( "short", "$HIG$Rage Against The Machine$NOR$" );
	set( "owner", "devil" );
	set( "object", ([
		"file10"   : "/open/killer/obj/dagger",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 99,
		"amount8"  : 99867,
		"file8"    : "/open/killer/obj/bellstar",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/killer/headkill/obj/e_dag",
		"file5"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file4"    : "/open/killer/obj/s_pill",
		"file7"    : "/open/killer/headkill/obj/i_dag",
		"amount6"  : 18,
		"amount10" : 1,
		"amount4"  : 70,
		"file6"    : "/open/ping/obj/poison_pill",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10816 );
	set( "exits", ([
		"enter"     : "/open/clan/ou-cloud-club/room/room177",
		"west"      : "/open/clan/ou-cloud-club/room/room16",
	]) );
	set( "long", @LONG

来自洛杉矶的暴力四人组Rage Against The Machine，
在Hip Hop/Punk主力潮流中一枝独秀，造因于他们在激
进震动人心的音乐下言之有物，有思想的歌词透过Hip 
Hop与Punk撞击的曲式诉求政治、社会议题，强势吉他
声线和剽悍愤恕的呐喊引动群众的共鸣。 

LONG);
	setup();
	replace_program(ROOM);
}
