// Room: /u/o/onion/room/w_room0.c

#include <room.h>
inherit ROOM;

void create()
{
	set("short", "镳局内堂走廊");
	set("long", @LONG
从镳局外走进来,你看到一条长长的走廊,上面铺着上好的榉木地板,两旁的烛火将
地板照的光可鉴人,似乎可以很清楚的看到自己的影子.
    走廊一直向前延伸,前方似乎是镳局所设的客房.
    南方有一道木门(door).
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "south" : (: look_door,     "south" :),
  "door" : "一扇坚实的木门,上头雕着复杂的花纹.\n",
]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"room0",
  "south" : __DIR__"room2",
  "east" : __DIR__"room3",
]));
	set("valid_startroom", "1");

        create_door("south","木门","north",DOOR_CLOSED);
	setup();
}
