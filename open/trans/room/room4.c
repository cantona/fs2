#include <ansi.h>
#include	"/open/open.h"

inherit TRANS_ROOM;

void create ()
{
  set ("short", "中央驿站");
	set( "build", 6 );
  set ( "long", @long
这儿就是最最出名的驿站, 镳局的车队, 来往于沙漠的骆驼队, 甚
至是牛马骡车, 几乎只要你叫得出名字的交通工具这儿都有。
long);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sale_girl" : 1,
]));
  set("no_kill",1);
  set("no_magic",1);
  set("no_fight",1);

	set("outdoors", "/open/main");
	set("exits", ([ /* sizeof() == 4 */
    "west" : "/open/center/room/road2",
    "south" : "/open/center/room/road3",
	"up"	: "/open/common/room/inn",
    "north" : "/open/center/room/road1",
    "east" : "/open/center/room/road4",
    "down" : "/open/wiz/donate",
]));

  setup();
  call_other("/obj/board/start_b", "???");
}

//如果你是这里的新朋友，虔诚的祈祷(pray howard), 天神会将你传送到新手练功区喔。
void init()
{
  ::init();
  add_action ("do_pray","pray howard");
}
int do_pray()
{
	if(this_player()->query("combat_exp")>20000)
          return notify_fail("你还是新手吗，去去去，到别的地方练功去!\n");
        message_vision(HIY"天神感应到$N虔诚的心意从天空射出一道光芒将就$N带走。\n\n"NOR, this_player());
        this_player()->move("/open/start/room/newhand5.c");
        return 1;
}




