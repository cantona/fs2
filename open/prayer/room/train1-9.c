//open/prayer/room/train1-9

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    圣火教总坛的大走廊，往西边进去便是执
	法长老的房间．南边的尽头是厨房，往北是圣
	火教的御花园．

LONG);
  set("exits", ([ /* sizeof() == 3 */
	"south" : "/open/prayer/room/train1-14",		//`走廊
	"north" : "/open/prayer/room/train1-4",		//`走廊
	"enter" : "/open/prayer/room/2elder6",		//`长老房
]));

  setup();
}
 
