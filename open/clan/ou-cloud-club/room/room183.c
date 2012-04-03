inherit ROOM;
void create() {
	set( "short", " 　$HIG$绿$NOR$   $HIY$竹$NOR$   $WHT$轩$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10074 );
	set( "owner", "linda" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room184",
	]) );
	set( "long", @LONG

  微风轻拂，一丛丛高挑的修竹，也随着轻风起舞。再往后一探，
一间古朴的竹屋映在眼帘。环顾四方，一淙清浅的娟流就在你身后
流过。接近竹屋，让人感到益发的舒适，尽管身处江湖，双手沾满
鲜血，但是在心底，仍然向往着一片干净的桃源。

LONG);
	setup();
	replace_program(ROOM);
}
