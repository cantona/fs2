#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "段家竞技场");
  set("long", @LONG
身为段家弟子，必须文武合一。段王爷有鉴于这一点，特别为弟
子们成立训练厅，希望他们在读书之外，还能锻炼自己的体魄。
  

LONG);
    set("light_up", 10);
   set("exits", ([
   "down": __DIR__"tr4",
    "up": __DIR__"tr2",
   
    ]));
   set("objects",([
         "/open/ping/npc/train3.c":  3,
           ]));
 setup();
}
