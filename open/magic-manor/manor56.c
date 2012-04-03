#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "幽径");
	set ("long", @LONG
幽幽的小径，带着微弱的光线，幽径的光线尽被两旁高大的古木
给遮光了，在此微弱的光芒下，更添了几分幽静的气息。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor57",
	"south"	: __DIR__"manor55",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
