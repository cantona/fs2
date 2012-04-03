// concentrate.c
// by airke
#include <ansi.h>

int exert(object me, object target)
{
int atman_gain,forcelost;

  if( target!=me)
       return notify_fail("「聚灵法”只能用来恢复自己的灵力。\n");
  if( me->query("force") < 30 )
       return notify_fail("你的内力不够。\n");

	
  atman_gain =me->query_skill("force")*2;
  
//  if( atman_gain + me->query("atman") > me->query("max_atman") )
//       me->set("atman", me->query("max_atman"));
//  else
       me->add("atman",  atman_gain);
  
  me->add("force", -30);
  me->receive_damage("gin", 10);

  message_vision(
	HIY "$N静走了下来，心神合一，缓缓的运起「聚灵法”...\n"
        HIR"一股灵气从四周的环境飘来散出，汇聚在$N的天灵，然后慢慢逝去。\n"NOR,me);
  if( (int)me->query("atman") > (int)me->query("max_atman") * 4) {
   if( (int)me->query("max_atman") >= (int)me->query_skill("magic")*10 ) {
     write("当你的灵力增加的瞬间你忽然觉得脑中一片混乱，似乎灵力的提升已经到了瓶颈。\n");
   } else {
     write("你的灵力提高了！\n");
   }
  me->set("atman", me->query("max_atman"));
  }
  if( me->is_fighting() ) me->start_busy(3);

 return 1;
}

