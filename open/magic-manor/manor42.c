#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "东厢房");
	set ("long", @LONG
一间干净整齐的厢房，厢房的中央摆了一张四角桌，桌上摆了一
盏油灯，照亮了整间房间，房间的一旁还有一个小窗户，可以看到外
面的风景，为远道而来的宾客提供了一个舒适的休息环境。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor41",
	]));

	set("light_up", 1);

	setup();
}
