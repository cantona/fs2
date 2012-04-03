#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "内院走道");
  set ("long", @LONG

这里是金刀门王宅的内院，内院呈一个口字型，中间是一个花园，花园四
周是王元霸家眷的住处，你看看四周房间，门栏窗隔俱是细雕时新花样，
并无朱粉涂饰。
西方是王大小姐的香闺。


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 3 */
   "east" :__DIR__"g3-6.c",
   "north" : __DIR__"g3-4.c",
   "west" : __DIR__"g3-5-1.c",
]));

create_door("west", "雕花紫檀木门", "east", DOOR_CLOSED);
  setup();
}

 int valid_leave(object me, string dir)
  {
	if(dir=="west" && (doors["west"]["status"]==DOOR_CLOSED) )
	return notify_fail("你必须先把雕花紫檀木门打开！\n");

    if(dir=="west"&&me->query("gender")=="男性")
	if(!me->query_temp("can-enter") && me->query("lotch")<1 && me->query("quests/lotch") <1 )
	{
	if(me->query_temp("know_leing") )
	me->set_temp("cant-enter",1);
	return notify_fail("一个大男人 , 擅闯女孩子的闺房 ?\n");
	}
   return 1;
  }
