#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "休息室");
  set ("long", @LONG
 这是杀手们完成任务后的休息的地方  
在这儿有一小水池(water),池水非常清澈,
可以听到地下传来一阵阵淙淙的水声,想必是地下水源所发出的

然而目前的水池，虽然仍有清水源源不觉得冒出，
但是看见水底的通道似乎早已被，石头所掩盖住，
想必是当年想要以炸药炸死各派传人的时候，故意断掉所有通路。
但是，细心的你发现，水底的石头附近，并没有长青苔。
似乎，并非长时间不动的岩石，难不成水底通道并没有被封住？
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r4",
  "east" : __DIR__"r6",
  "south" : __DIR__"r8.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "water" : "池水非常清澈,你可以在这儿喝水(drink) 
",
   ]));
/*
  set("objects", ([ 
  "/open/killer/npc/trainer2.c" : 2,]));
*/
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

  setup();
}
void init()
{
   add_action("do_drink", ({"drink"}) );
   add_action("do_enter",({"enter"}));
}
int do_drink(string arg)
{
  object me;
  if (!arg || arg=="" )
  {
  me = this_player();
  if ( (int)me->query("water") >= (int)me->max_water_capacity() )
    {
    tell_object(me,"你已经一口水也喝不下了.......\n");
    return 1;
    }
    tell_object(me,"你从池中舀了几口水喝......\n");

    me->add("water",40);
  return 1;  
}
    return 1;
}

int do_enter(string arg)
{
   object who;
   who=this_player();
   if(who->query("class")!="killer")
   return notify_fail("这是杀手专用密道,一般人无法进入!\n");
   if((arg="water") || (arg=="water")) {
   message_vision(GRN"$N进入了小水池中\n"NOR,who);
   tell_object(who,"\n你只听到～～～～哗啦～～～～
    ～～～～～～～～～～～～～～～～～～～～～～～～～哗啦～～～\n\n");
   tell_object(who,HIW"只见一阵强大的水势迎面而来～～ \n"NOR);
   tell_object(who,"你在无法反抗之下被水流带往他处 \n");
tell_object(who,HIC"\n你感觉水势减弱,随便乱抓之下,抱住一颗大石头 \n\n"NOR);
	who->move(__DIR__"r7.c");
   return 1;
   }
      return 0;
}
