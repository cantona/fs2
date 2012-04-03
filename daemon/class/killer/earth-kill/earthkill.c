#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target,object *enemy)
{
int fun,damage;
string msg;
string *name;
if( !target ) target = offensive_target(me);
if(me->query("class") != "killer")
return notify_fail("你的职业无法使用。\n");
if((me->query_skill("earth-kill",1) < 40))
return notify_fail("你的地斩修为不足，无法使出此奥义。\n");
if((string)me->query_skill_mapped("dagger")!= "earth-kill")
return notify_fail("里˙伊贺流奥义必须使用‘地斩’!!\n");
if( me->query("family/family_name") != "黑牙联" )
return notify_fail("里˙伊贺流奥义只有伊贺派的门人才可以使用。\n");
if(me->query("force")<300)
return notify_fail("你的内力不够。\n");
if(me->query("bellicosity")<50)
return notify_fail("你的杀气不够。\n");
if(!me->is_fighting(target))
return notify_fail("里˙伊贺流奥义只能在战斗中才能使用。\n");
fun=me->query("functions/earthkill/level");
damage=me->query("functions/manakee/level")+fun+me->query_skill("earth-kill",1);
message_vision(GRN"里 ˙ 伊 贺 流 奥 义"HIW" －－"HIY"‘"YEL" 地    斩 "HIY"’\n\n"NOR,me);
if( 20 < random(100) )
{
message_vision(MAG"\n$n被$N的第一招奥义"RED"烈火蜂"MAG"击中, 造成极为严重的烧伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("burn",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
if (fun > 20)
{
message_vision(MAG"\n$n被$N的第二招奥义"HIB"寒冰蝶"MAG"击中, 造成极为严重的冻伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("cold",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
}
if (fun > 40)
{
message_vision(MAG"\n$n被$N的第三招奥义"HIY"毒  牙"MAG"击中, 造成极为严重的毒伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("snake_poison",10);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
}
if (fun > 60)
{
message_vision(MAG"\n$n被$N的第四招奥义"HIW"气  戟"MAG"刺中, 造成极为严重的内伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("hart",10);
me->add("force",-300);
me->add("bellicosity",-50);
COMBAT_D->report_status(target, 1);
}
if (fun > 80)
{
message_vision(MAG"\n$n被$N的第五招奥义"HIR"血  刃"MAG"劈中, 造成极为严重的外伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->apply_condition("bleeding",10);
me->add("force",-300);
me->add("bellicosity",-50);
COMBAT_D->report_status(target, 1);
}
if (fun > 99)
{
message_vision(MAG"\n$n被$N的最终之奥义"HIC"空  蝉"MAG"劈中, 造成极为严重的震伤!!\n"NOR,me,target);
target->receive_wound("kee",damage);
target->start_busy(1);
me->add("force",-30);
me->add("bellicosity",-10);
COMBAT_D->report_status(target, 1);
} 
}
else
{
message_vision(HIC"\n$N在千均一刻之际，躲过地斩奥义的连续攻击!!\n"NOR,target);
}
message_vision(HIW"\n$N使出地斩奥义的连续攻击后内劲损耗过大, 蹲在一旁喘息。\n"NOR,me);
me->start_busy(1);
if(me->query("functions/earthkill/level") < 100)
{
function_improved("earthkill",random(50));
}
message_vision( NOR,me);
return 1;
}

