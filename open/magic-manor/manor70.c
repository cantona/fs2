#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "庭园小桥");
	set ("long", @LONG
一座小型的石桥，石桥下可以听到潺潺的流水声，流水中还可以
见到绵鲤悠闲的在水中游着，石桥是大理石建材，虽然历经岁月的摧
残，仍不减石桥风彩。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"north"	: __DIR__"manor71",
	"south"	: __DIR__"manor69",
	"east"	: __DIR__"manor74",
	"west"	: __DIR__"manor73",
	]));

	set("outdoors", "/open/magic-manor");

	setup();
}
