#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"迷阵入口"NOR);
  set ("long", @LONG
虚幻的入口.飘邈的景象...似乎在诉说着这里隐藏着无数的可能性
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room2/array0",
  "south" : "/open/gsword/room2/road1",
]));
  set("no_magic", 1);
  set("no_transmit", 1);
  set("no_fight",1);
  setup();
}
