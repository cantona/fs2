inherit BULLETIN_BOARD;
void create()
{
	set_name( "下御生", ({ "board", "board" }) );
	set( "long", "下御生。\n" );
	set( "board_id", "sky-wu-chi" );
	set( "capacity", 100 );
	set( "location", CLAN_D->clan_query( "sky-wu-chi", "home" ) );
	set( "master", ({ CLAN_D->clan_query( "sky-wu-chi", "master" ) }) );
	setup();
}
