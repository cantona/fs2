#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
	string msg;
	object ob;
	string *name;
        int fun=me->query("functions/firefinger/level");
	if( !target ) target = offensive_target(me);
    if(!target) return notify_fail("你找不到敌人!!\n");
//不能攻击自己by bss
    if(target==me) return notify_fail("攻击自己??找死吗?\n");
        if(me->query("class")!="poisoner")
        return notify_fail("只有魔教徒能用。\n");
	if(!me->is_fighting(target))
	return notify_fail("火云柔指要在战斗中才能使用。\n");
	if(me->query("force")<110)
	return notify_fail("你的内力不够。\n");
	if(me->query_skill("coldpoison",1)<30)
	return notify_fail("你的天冰奇毒火喉不够，无法使用火云柔指。\n");
	message_vision( HIR "$N身形一转，右手食指指尖散出红光，忽地一指伸出，往$n点去！\n",me,target);
if(80>random(100))
	{
message_vision( HIC "$n一发觉不妙，可惜已经来不及了，$N右手指尖已在$n划出一道伤痕。\n",me,target);
target->apply_condition("fire_poison",5);
target->receive_damage("kee",(100+(7*fun)));
	}
	else
	message_vision( HIC "$n发觉不妙，身子轻轻一纵，一个转身避了开去。\n",me,target);
	me->add("force",-100);
        me->start_busy(1);
if(fun<100) function_improved("firefinger",random(500));
	message_vision( NOR,me);
	return 1;
}
