#include <ansi.h>

inherit ROOM;

void create()
{
	set( "short", "【"HIB"狂想石窟"NOR"】" );
	set( "long", HIG"
   [日期]     [捐款者]     [金额]  [手续费]
"HIR"----------------------------------------------"NOR"
   09/03/2001 Alucard        350        0
   09/03/2001 Abc            100        5
   09/03/2001 Prince         100        5
   09/04/2001 Srat           300       10
   09/04/2001 Ywarter        500       10
   09/04/2001 Onesnowhot     500       10
   09/05/2001 Salicili       100        5
   09/12/2001 Sula          2000       15
   09/14/2001 Del            100        5
                           "HIB"------   ------"HIM"
                       小计 4050       65
"HIR"----------------------------------------------"HIY"
                       总计 3985 元
\n"NOR );
	set( "no_fight", 1 );
	set( "exits", ([
"east" : "/open/wiz/donate_3",
		"west" : "/open/wiz/donate",
	]) );
	setup();
}
