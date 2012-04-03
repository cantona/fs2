#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", HIB+"寒冰洞"+NOR);
  set ("long", @LONG
你正走在一块巨大的冰棚上 ,幽蓝的光芒自遥远的冰下透
上来 ,透着诡异而迷离的气氛 ,四处都是湿湿滑滑的 ,连行动
都得小心谨慎...


LONG);
 set("exits", ([ /* sizeof() == 4 */
 "east" : "/open/island/room/c10",  
 "north" : "/open/island/room/c15",
 "southeast" : "/open/island/room/c3",
 "west" : "/open/island/room/c21",


]));

 
 set("light_up", 1);
 
 setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
        // 5秒后呼叫
        call_out("greeting", 2, ob);
   }
  add_action("do_team","team");

}

int greeting (object who)
{
  object room=environment(who);
//  判断player是否在这个房间
  if(this_object() == room )
 who->add("kee",-70);
return 1;
}

int do_team(){
   object me=this_player();
   tell_object(me, "你手脚冰冷的不听使唤!!\n");
   return 1;
}




