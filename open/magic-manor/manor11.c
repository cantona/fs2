#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "转精舍");
	set ("long", @LONG
在未进入这的门口上方挂着一块匾额，题着「转精舍”三个大大
的字，让你在未进入前即有了如此深刻的印象，而这间舍室的主人则
是聚灵八杰中的「莫道子”。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor09",
	]));

	set("objects", ([ /* sizeof() == 2 */
	__DIR__ "npc/modau-zi" : 1,
	]));

	set("light_up", 1);

	setup();
}
