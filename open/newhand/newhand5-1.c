#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIG"狂想空间特色说明房间"NOR);
  set ("long","这里的房间是介绍狂想空间的一些小特色!!!
  特色一：请打help 公式。狂想的战斗公式及其他重要的属性公式都在里面!!!
  特色二：大侠制度,exp在三百万以上时将成为大侠!!!可以自创自己招式!!!
  特色三：帮派的制度!!!
  特色四：特色常常在增加，请打help news可以随时看到新的公布事项!!!!
                \n");
  set("exits", ([
  "northwest" : __DIR__"newhand",
  "southeast" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

