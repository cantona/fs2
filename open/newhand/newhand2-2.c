#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"狂想空间新手入门"NOR);
  set ("long","看完了新手入门文件(help newbie)之后,要了解一下狂想空间的门派!!
  一般来说在成为大侠之前总是要先找个门派拜师学艺!!在加入门派之前要先加入公会(class)
  新手第二步：先加入该门派的公会(join class)在加入该门派(apprentice master)
  你可以打guild,就会出现狂想空间的门派及职业!!!
  若你想对该门派有进一步的了解...可以打help 帮派简介
  \n");
  set("exits", ([
  "west" : __DIR__"newhand2-1",
  "east" : __DIR__"newhand2-3",
               ]));
  set("light_up", 1);
  setup();
}

