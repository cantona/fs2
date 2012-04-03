#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "庭园");
	set ("long", @LONG
小小的庭园，布满各式庭园造景，有小山，小桥，流水，看上去
的风景是如此的美丽，似是来到一处人间仙境般。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor70",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
