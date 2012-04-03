#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "练武广场");
	set ("long", @LONG
一个若大的广场，布满了各式练武的道具和木椿，是聚灵庄的各
个弟子们习武的场所，广场上有许多新进的弟子分成许多组正在辛勤
的习武着，而每一组弟子都有一个专门的教头在专心的指导着。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor32",
	"south"	: __DIR__"manor30",
	"east"	: __DIR__"manor34",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
