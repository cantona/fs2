#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"狂想空间指令入门房间"NOR);
  set ("long","狂想空间的指令集分成二大系统!!!
  1.一般指令系统(help cmds)       (所有的玩家都可以使用)
  2.帮派指令系统(help clancmds)   (部份有开放给一般玩家,除此之外限定帮派才能使用)
  你可以打help cmds就会列出所有指令集!!!
  若你对该指令集有不了解的地方,你可以打help <指令>
  例如::
         打 help look
  就会出现
  指令格式 : look [<物品>|<生物>|<方向>]
  指令说明 :
             这个指令让你查看你所在的环境、
             某件物品、生物、或是方向。
  ps:指令是最基本的!!所以请新玩家在玩时一定要把指令看清楚!!
  \n");
  set("exits", ([
  "north" : __DIR__"newhand",
  "south" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

