#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","水底");
   set ("long", @LONG
这是地下水道的底部,三方都是黑暗无光
只有上面有微弱的光线(light)照射下来
你手上抱着一颗大石头。
LONG);
set("item_desc",([
  "light" : "你尽力地想看清楚光线是从那儿照射下来,但是太暗了,看不清楚,要过去的话,请(pass) 。\n",
  "stone" : "就是这一颗石头救了你的命,要放开请(swim)。\n",]));
  set("no_fight",1);
 set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  setup();
}
void init()
{
 //  add_action("do_swim",({"swim"}) );
   add_action("do_pass",({"pass"}) );
}

/*
int do_swim(string arg)
{
   object me;
   if (!arg || arg=="" )  {
   me = this_player();
  tell_object(me,"只听你ㄚ～～ㄚ～～的叫声声响起,你的手放开了大石,再一次地被
水流带走 。\n");
  tell_object(me,"_[33;1m最后你终于被水流给抛出地面 。_[0m\n");

  me->move("/open/ping/room/road8");
 return 1;
 }
return 1;
}
*/

int do_pass(string arg)
{
  object who;
  who=this_player();
  if(!arg || (arg=="light")) 
  {
	tell_object(who,"_[1m你吃力的往光线处游去,爬过小洞,来到了不知名的地方。_[0m\n");
	if(who->query_temp("head") == 8)
		who->move(__DIR__"cosinrm.c");
	else
		who->move("/open/ping/room/road8");
	 return 1;
  }
   return 0;
}