// Room: /u/c/chhu/workroom.c
#include "../cold.h"

inherit ROOM;

void create()
{
	set("short","晚风亭");
	set("long", @LONG
这里就是寒谷有名的「晚风亭”，在此处，风景奇美，且每到傍
晚，缓缓凉风徐徐吹来，常常可以看到寒谷一派的弟子在此享受美景
，或三、五结伴坐在亭边谈天，或嘻嘻哈哈的在一旁玩乐，此种景像
让人觉得好像到了仙境一般。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":COLD_ROOM"right3",
]));
	set("objects",([
	COLD_NPC"trainee":1,
	COLD_NPC"trainee1":1,
	]));
	setup();
	replace_program(ROOM);
}
