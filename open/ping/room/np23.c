#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "后堂");
	set( "build", 2 );
  set ("long", @LONG
    走进这里, 是一间偏厅, 往北是段云的房间, 两旁各有一条走道,
长廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "north" : (: look_door,     "north" :),
]));
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"p1.c",
  "west" : __DIR__"np24",
  "north" : __DIR__"np25",
  "east" : __DIR__"np22",
]));
  set("light_up", 1);
create_door("north","雕花紫坛木门","south",DOOR_CLOSED);
  setup();
}
