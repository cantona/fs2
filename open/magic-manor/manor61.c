#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIG"木灵塔"NOR);
	set ("long", @LONG
木灵塔的周围遍满了蔓藤的包围，蔓藤不断的向周围生长，且上面
长满了可怕的尖刺并不时的朝你这里衍生了过来，若身上没有可以克制
此物的宝物，冒然进塔，将会是充满了危机。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor60",
	"enter"	: __DIR__"wood/wood01",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
