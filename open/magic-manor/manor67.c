#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "厢房走道");
	set ("long", @LONG
简仆的走道，走道旁摆着几个盆栽，让走道看来较具生气，是通
往厢房走道，在走道的不远处即可看到一间若大的屋子，屋子是百年
沉香木所建造，风格真是古色古香。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"east"	: __DIR__"manor41",
	"west"	: __DIR__"manor40",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
