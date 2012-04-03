#include <ansi.h>
int perform( object me )
{
object *enemy = all_inventory( environment(me) );
int fun,i;
fun=me->query("functions/heal/level");
if(me->query("family/family_name")!="银针门")
return notify_fail ("只有银针门能用！\n");
if(me->query_temp("cure")==1)
return notify_fail ("治愈术必须休息一振子才能使用!!\n");
if(me->query_skill("shinnoforce",1)< 60 )
return notify_fail ("你的神农琉璃心法不够纯熟！\n");
if(me->query_skill("godcure",1)< 100 )
return notify_fail ("你的神华佗医术不够纯熟！\n");
if(me->query_skill("cure",1)< 100 )
return notify_fail ("你的基本医术不够纯熟！\n");
if(me->query_skill_mapped("force") != "shinnoforce")
return notify_fail("你没有装备神农琉璃心法!!\n");
if(me->query("combat_exp")<1000000)
return notify_fail ("你的经验不足!\n");
if (me->query ("force") < 2000)
return notify_fail ("你的内力不足!\n");
if( me->is_fighting() ) me->start_busy(2);
message_vision (HIW"$N运起神农琉璃心法中的"HIY"「神农治愈术”"HIW"!!"NOR"\n",me); 
me->add ("force", -2000);
me->set_temp("cure",1);
call_out("out",20,me);
for( i=0; i<sizeof(enemy); i++ )
{
if( enemy[i]->is_character() && !enemy[i]->is_corpse() )
{
enemy[i]->receive_curing("kee",fun*22);
enemy[i]->receive_heal("kee",fun*22);
COMBAT_D->report_status(enemy[i], 1);
}
}      
return 1;  
}
int out(object me)
{
int fun=me->query("functions/heal/level");
tell_object(me,"你精神恢复, 可以再度使用治愈术!!\n");
if(fun<100) me->function_improved("heal",100+random(100));
me->delete_temp("cure");
}