//by Casey
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", HIB"地底湖中"NOR);
  set ("long", @LONG
潜进碧幽的湖中，暗而透明的蓝色湖水深不
见底。一阵水流激荡 , 你一回头看, 什么东西都
没有, 只是虚惊一场..

LONG);
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
 "up" : __DIR__"d-9",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

