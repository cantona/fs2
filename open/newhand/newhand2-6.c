#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"狂想空间新手入门"NOR);
  set ("long","最后大部份的门派都有提供谜(quests),及进阶武技提升
  的特别绝招(functions)!!这方面,新手玩家在玩时可以请教老玩家,或是
  加入帮派后可以问一下帮中的高手!!!虚心请教!!!我想大多数的玩家都
  会很乐意帮你的!!!!
  \n");
  set("exits", ([
  "west" : __DIR__"newhand2-5",
  "east" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

