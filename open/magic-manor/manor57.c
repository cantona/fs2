#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", HIB"封灵祭台"NOR);
	set ("long", @LONG
竖立在这里的是一个大型的祭台，历经久远的岁月，祭台已显得
残破，却不失其形，四周已长满了青苔和布满和蛛网，祭台上空无一
物，只有大小不同的凹痕，却不知其作用为何。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor56",
	]));

	set("light_up", 1);
	set("outdoors", "/open/magic-manor");

	setup();
}
