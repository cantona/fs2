#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"狂想空间新手入门"NOR);
  set ("long","狂想空间跟一般的Mud一样都附有新手入门的文件(help newbie)
  所以请新手你们可以打help newbie,先看一下新手入门的文件!!!
  所以新手入门第一步就是看help newbie
  \n");
  set("exits", ([
  "west" : __DIR__"newhand",
  "east" : __DIR__"newhand2-2",
               ]));
  set("light_up", 1);
  setup();
}

