// fire_8.c by ACKY

inherit ROOM;
#include <ansi.h>
#include <fire.msg>

void create()
{
	set( "short", HIR"������Ȧ�"NOR );
	set( "long", (: print_msg :) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );    
        set( "exits", ([ /* sizeof() == 2 */
		"north" : __DIR__"fire_5",
		"west"  : __DIR__"fire_7",
		"east"  : __DIR__"fire_9",
	]));
        setup();
}

