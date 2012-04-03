// focuskee.c
#include <ansi.h>
int exert(object me)
{
	object weapon;
	if(me->query("class") != "blademan")
	return notify_fail("只有刀客才能将真力灌入刀身。\n");
	if(me->query("force")<me->query_skill("blade")/10+50)
	  return notify_fail("你的内力不够。\n");
	if(!objectp(weapon=me->query_temp("weapon"))
	|| (string)weapon->query("skill_type")!="blade")
	  return notify_fail("要有刀才能用聚气刀术。\n");
	if(weapon->query_temp("focuskee")==1)
	  return notify_fail("你已经在用了。\n");
 if(me->query_temp("usebladekee"))
 return notify_fail("你已经在用了。\n");  
	me->add("force",-50-me->query_skill("blade")/10);
	message_vision(
	HIR "$N发出一阵狂吼，将真力贯入手中的[0m$n[1;31m，使[0m$n[1;31m发出一阵轻爆声。\n" NOR,me,weapon);
me->set_temp("usebladekee",1);
	me->add_temp("apply/damage",me->query_skill("force")/10+me->query_skill("blade")/5+15);
	weapon->set_temp("focuskee",1);
	me->start_call_out( (: call_other,__FILE__,"remove_effect",weapon,me :),me->query_skill("force")/2);
	return 1;
}
void remove_effect(object weapon,object me)
{
    if(!me || !weapon) return ;
	me->add_temp("apply/damage",-me->query_skill("force")/10-me->query_skill("blade")/5-15);
	weapon->delete_temp("focuskee");
 me->delete_temp("usebladekee");
message_vision("[36m$N手中的[0m$n[36m所散发出的霸气消失了。[0m\n",me,weapon);
}
