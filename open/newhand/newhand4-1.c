#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIC"狂想空间小秘技天地"NOR);
  set ("long","这房间是介绍一些狂想的在玩时的一些小秘技!!
  提供给新玩家参考之用!!!
  秘技一：善用alias指令,alias 指令是可以用来缩短指令的输入。
  例如：buy water from vendor (像小贩买水),我们可以用alias来设
  alias bw buy water from vendor 那以后打bw时就是代表这字串!!!
  可以打help alias来看!!!

  秘技二：善用do指令!!及配合alias 指令!!!
  例如：由于alias一次只能作一个动作,若我们要作很多的动作时.要怎么设呢
  alias 1 do e,e,buy water from vendor
  我们可以用do指令来作,用逗点来分隔出指令........
 \n");
  set("exits", ([
   "north" : __DIR__"newhand",
  "south" : __DIR__"newhand4-2",
               ]));
  set("light_up", 1);
  setup();
}

