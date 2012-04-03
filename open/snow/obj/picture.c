inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG "路观图" NOR,({"snow picture","picture"}));
	set("unit","张");
	set("value",10);
        setup();
}
void init()
{
	add_action("do_read","read");
}
int do_read( string arg )
{
	object env = environment( this_player() );
	if( !arg || arg != "picture" ) return 0;
	if( base_name( env ) != "/open/snow/room/room3" ) {
		tell_object( this_player() ,@LONG
		/\
	      /    \
	   /         \
-----------        *   \
LONG);
		return 1;
	}
	tell_object( this_player() , "你在这里发现了路观图所指示的路口。\n" );
	this_player()->move("/open/snow/room/dguger_room");
	return 1;
}
