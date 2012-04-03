#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "小径");
	set ("long", @LONG
含风亭走过来，路径一转，景致一变，已是一条小径在眼前，小
径的足迹并不明显，似是很少有人来过，小径的北方有一条更小的幽
径，不知是通往何方，东方则是另外一段小径的路。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor55",
	"east"	: __DIR__"manor58",
	"west"	: __DIR__"manor51",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
