#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target,object *enemy)
{
int fun,damage;
string msg;
string *name;
if( !target ) target = offensive_target(me);
if((me->query_skill("darkforce",1) < 100))
return notify_fail("你的真˙黑牙神功修为不足，无法使出此奥义。\n");
if((string)me->query_skill_mapped("force")!= "darkforce")
return notify_fail("真˙魔气杀必须使用‘真˙黑牙神功’!!\n");
if( me->query("family/family_name") != "黑牙联" )
return notify_fail("真˙魔气杀只有伊贺派的门人才可以使用。\n");
if(me->query("force") < 300)
return notify_fail("你的内力不够。\n");
if(me->query("bellicosity") < 50 ) 
return notify_fail("你的杀气不够。\n");
if(!me->is_fighting())
return notify_fail("真˙魔气杀只能在战斗中才能使用。\n");
if(target->query_busy() > 0)
return notify_fail("对手正动弹不得。\n");
fun=me->query("functions/evilkee/level");
damage=me->query("functions/manakee/level")*4+fun*6;
message_vision(CYN"
                   $N瞬间杀意狂升,以杀意换成魔气。
                     "MAG"$N身上发出一股强大的魔气……
           "HIW"■"HIB"$N身上魔气逐渐地往四处散发, 四周光线顿时消失"HIW"■
                           "HIY"黑牙神功秘奥义
                       "HIC"－－"HIW"「"GRN"真˙魔气杀"HIW"”"HIC"－－
\n"NOR,me);
if( 20 < random(100) )
{
if(fun >= 0 && fun < 20 )
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并受到轻微冻伤!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(1);
target->apply_condition("cold",5);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 20 && fun < 40 )
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并受到轻微灼伤!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(2);
target->apply_condition("burn",5);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 40 && fun < 60)
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并受到严重内伤!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(2);
target->apply_condition("hart",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 60 && fun < 80)
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并受到魔气缠身!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("mkill_out",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun >= 80 && fun < 100)
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并且气血失调!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("ff_poison",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}
if (fun == 100)
{
message_vision(HIG"$N受到魔气伤害全身无法动弹并且气血失调, 失去心智!!\n"NOR,target);
target->add("kee",-damage);
target->start_busy(3);
target->apply_condition("mess",2);
target->apply_condition("ff_poison",10);
me->add("bellicosity",-100);
COMBAT_D->report_status(target, 1);
}}
else
{
message_vision(HIC"$N心境空明, 识破了这个以魔气所布下的幻觉!!\n"NOR,target);
}
if(me->query("functions/evilkee/level") < 100)
{
function_improved("evilkee",random(100));
}
message_vision( NOR,me);
return 1;
}

