#include <room.h>
inherit ROOM;
void create()
{
        set("short", "山洞");
	set("long", @LONG
这里是峭壁里的山洞，虽然说是个山洞，不过还是顶干静的，在这
里你还可以听见清析的滴水声。往北走就可以出山洞了。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
            "west"  : __DIR__"cave1",
            "north" : __DIR__"cliff",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
	setup();
}


