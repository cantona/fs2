inherit ROOM;
#include <ansi.h>
 
void create ()
{
  set ("short", "平地");
  set ("long", @LONG
你走在道路上, 感觉微风佛过, 非常舒畅, 天边的流云变化万千
仿佛是一场精彩的舞台秀..
    你发现路旁有一只怪怪的招财猫..

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"maiu-1.c",
]));
  set("outdoors", "/open/main/room");

  setup();
}

void init ()
{
  object me=this_player ();
  if ( me->query_temp("six_sp_quest") == 9)
      {
       message_vision(HIG"\n突然间, 你发现不远方有个小山岭, 你感到可疑, 急忙奔去查看.\n\n"NOR,me);
       me->move("/open/main/mi_room/mi01.c");
      }
}
