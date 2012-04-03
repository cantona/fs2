#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "三转灵道");
	set ("long", @LONG
愈至这里，愈觉得凶险的感觉涌上了心头，前方入目的是三条不
同的道路，从每条道路的那头还不时的飘来不同色的灵光，灵光中还
夹带着些许的杀伤力。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor64",
	"south"	: __DIR__"manor60",
	"east"	: __DIR__"manor62",
	"west"	: __DIR__"manor58",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
