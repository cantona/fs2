
inherit BULLETIN_BOARD;
#include <ansi.h>

void create()
{
	set_name( HIR"枉死簿"NOR, ({ "unjust death book", "board" }) );
	set( "location", "/open/wiz/restore" );
	set( "board_id", "restore_b" );
	set( "long", "若因 bug 而枉死者, 可以来此 post 请求 restore" );
	setup();
	set( "capacity", 300 );
}
