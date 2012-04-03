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
add_action("do_secret",({"secret"}));
}

int do_secret()
{
 object me;

 me=this_player();
 if(me->query("class") != "killer")
 return 0;
 tell_object(me,"这房间果然有秘密！！发现了通道，你立刻走了过去\n");
 me->move(__DIR__"mimirm.c");
}