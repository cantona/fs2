#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "小径");
	set ("long", @LONG
由小径的那一头走过来，似乎又来到了另一境地，前方只剩一小
条的路径，前方的路途似乎带有极大的凶险，在此地的你也有少许的
感觉了。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor59",
	"west"	: __DIR__"manor54",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
