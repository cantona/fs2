#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "含风亭");
	set ("long", @LONG
六角形的亭子，周围的风以亭子为中心，并朝着亭子的六个方向
吹来，坐在亭中的人，可以隐隐感觉被风所包围，置身于此，可以感
觉到这里真是奇特的地方，令你想在此多跓足一会，好欣赏这美妙的
奇景一番。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor52",
	"east"	: __DIR__"manor54",
	"west"	: __DIR__"manor36",
	]));

	set("light_up", 1);

	setup();
}
