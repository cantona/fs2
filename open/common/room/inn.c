// Room: /open/common/room/inn.c babe 涂鸦.. cc..

inherit ROOM;

#include <ansi.h>
void create ()
{
  set ("short", "狂想空间入口处");
	set( "build", 43 );
  set ("long", @LONG

欢迎各位来到狂想空间的世界,希望这里能给你不同的发现!!! :)
新手请多多使用 help 指令哦~~~~~ :)

 往上走就是狂想空间帮派言论广场。
 往西为狂想技能建言的言论广场。
 往东为狂想玩家申请备份档案的地方。
 往南为狂想制度建言的讨论区。
 往北为违反狂想空间制度的公布栏。
 往东北方为历代狂想巫师纪念榜。
 往下走你将会正式进入狂想空间的世界。

LONG);

set("objects", ([ /* sizeof() == 2 */    
"/obj/ballot.c":1,     
"/open/tailong/npc/quest_girl":1,
]));
  set("exits", ([ /* sizeof() == 8 */
  "northeast" :"/open/common/room/sp_room.c",
  "statue" :"/open/main/statue/cgyroom.c",
  "newhand" : "/open/newhand/newhand",
  "up" : "/open/clan/area/home/clan",
  "south" : "/open/wiz/fsroom",
  "down" : "/open/trans/room/room4",
  "east" : "/open/wiz/restore",
  "north" : "/open/wiz/fsroom2",
  "west" : "/open/wiz/skroom",
]));
  set("valid_startroom", 1);
  set("light_up", 1);
  set("no_fight", 1);
  set("no_sac", 1);
  setup();
}
// 以免有 pker 用 sha-array 在此 pk....add by Daniel
// 加入 search , 为进入 train_yard的路 add by Anmy 98/5/26 
void init()
{
  add_action("do_team","team");
}
int do_team(){
   object me=this_player();
   tell_object(me, "老兄...你太狠了吧!想赶尽杀绝喔？\n");
   return 1;
}

/*
int do_search(string str)
{
  object me;

  me=this_player();
  if( str != "hole" )
return notify_fail("不要在地上乱爬啦？\n");
tell_room(this_object(),"$n找到一个秘洞, 就往洞内一鐕。\n",me);

message_vision("$n本来还好好的，一瞬间$n忽然消失在你眼前。\n",me,me);
  me->move("/u/a/anmy/room/train_room");
  return 1;
}
*/
