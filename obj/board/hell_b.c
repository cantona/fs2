inherit BULLETIN_BOARD;
void create()
{
	set_name( "阴曹地府布告栏", ({ "board", "board" }) );
	set( "long", "阴曹地府布告栏。\n" );
	set( "board_id", "hell" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "hell", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "hell", "master" ) }) );
	setup();
}
