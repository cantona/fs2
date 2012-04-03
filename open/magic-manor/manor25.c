#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "厅堂内室");
	set ("long", @LONG
由聚灵正殿走了过来，这是一间小小的内室，是庄主在平时接待
来宾之余，可以休息的地方，所以布置也较为简略一点，但是在这内
室中，却明显的可以感受到灵气比外面的还要强，也许灵气的来源正
是由此而来。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor01",
	]));

	set("light_up", 1);

	setup();
}
