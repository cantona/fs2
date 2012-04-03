// open/killer/room/pillrm.c
// 2001.11.07 修改for 检查柴荣把玩家送出来之后的部分
#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "杀手炼丹房");
  set ("long", @LONG
房间中烟雾缭绕，四处飘来的药水味道令人难以忍受。房间中间有个巨大的炼丹炉（can)
有一位年老的婆婆在看守，这里又没有隐藏什么秘密，真不知道她在看守什么，
传说中，她尽得叶孤城的真传，一身炼药的技术，可不是一般人可比拟。
据说连杀手密药，都是她与叶孤城合力创作出来的。

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"r19.c",
]));
  set("objects",([
      "/open/killer/npc/pillman.c":1,]));

  set("item_desc", ([ /* sizeof() == 1 */
      "can" : "炉中火焰正鼎沸，试着将富士山秘草炼化吧。 ",]));
  setup();
}

void init()
{
  object me;
  if(interactive(me = this_player()))
  {
  	if (me->query_temp("firstpart") == 6)
  	  tell_object(me,"婆婆看了你一眼，似乎有所想法，或许你可以告诉他(经过)吧？\n");
  }  	 
//  add_action("do_secret",({"secret"}));
}

int do_secret()
{
 object me;
 string temp;

 me=this_player();
 if(me->query("class") != "killer")
	 return 0;

//计算玩家进入次数
 if (!me->query("ninja/secret"))
	me->set("ninja/secret",1);
 else
	me->add("ninja/secret",1);
 if (!me->query("ninja/secret"))
 {//避免重复纪录
	temp=sprintf("%s 进入杀手医生的密室，在%s\n",geteuid(me),ctime(time()));
	CBIP_D->record(temp,"/u/w/wataru/record/secret");
	message_vision("叶如玲看了$N一眼!!\n",me);
 }
 tell_object(me,"这房间果然有秘密！！发现了通道，你立刻走了过去\n");
 me->move(__DIR__"mimirm.c");
 return 1;
}
