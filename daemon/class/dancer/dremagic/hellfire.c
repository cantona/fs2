#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun,fun1,fun2,funn;
int fk,tk,k,i,j=0,l=0,r;
int conjure (object me, object target)
{
object *enemy;
enemy=me->query_enemy();
i=sizeof(enemy);
fun=(me->query("spells/hellfire/level")/25)+1;
fun1=me->query("spells/hellfire/level");
fun2=(int)(me->query_skill("dremagic", 1));
funn=(fun1*7/10)+(fun2*3/10);
if(me->query("class")!="dancer")
return notify_fail("这法术只有舞者能用!!\n");
if(me->query("allow_hellfire")!=1)
  return notify_fail("偷学的不能使用喔\n");    
if( !target ) target = offensive_target(me); 
if(!target) return notify_fail("找不到敌人!!\n");
if(!me->is_fighting(target) )
return notify_fail("这法术只能对战斗中的对手使用!!\n");
if(me->query("max_atman") < 2500 )
return notify_fail("你的灵力根基不足!!\n");
if(me->query("atman") < 2500 )
return notify_fail("你的灵力不足!!\n");
if(me->query_temp("hellfire")==1)
return notify_fail("你施展魔法后心思尚未集中!!\n");
message_vision(HIY"
   $N闭目凝神,意守丹田,使出"HIG"夜舞"HIM"梦蝶"HIY"之最高境界
                   "HIB"地狱"HIC"雷"HIR"火"HIY"术
        "HIG"※ "HIW"天"HIY"～"HIC"雷"HIY"～"HIG"地"HIY"～"HIR"火"HIY"～"HIB"听"HIY"～"HIB"我"HIY"～"HIB"号"HIY"～"HIB"令 "HIG"※"HIW"
\n刹那间日月无光,狂风大作,一阵刺眼的强光向$n急奔而去\n
"NOR, me);
me->add("atman",-(500*fun));
me->set_temp("hellfire",1);
me->start_busy(1);
call_out("act1",10,me);
for ( l=0 ; l < fun ; l ++)
{
r=random(100);
if (r >= 60) 
{
message_vision(HIR"
      "HIB"玄阴"HIR"地火"HIW"幻化成一条"HIR"浴血"HIM"凤凰"HIW"直逼$N的身体
        $N全身冒起"RED"雄雄火焰"HIW","HIR"浴血"HIM"凤凰"HIW"破脑而出\n
"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
k=funn*7;
if (enemy[j]->query_temp("def_fire")==1) k=funn*2;
enemy[j]->receive_wound("kee",k);
enemy[j]->apply_condition("hellfire",random(20));
COMBAT_D->report_status(enemy[j]);
}
}
else if (r>=20)

{
message_vision(HIY"
      "HIC"九天真雷"HIW"幻化成一条"HIY"黄金火龙"HIW"直逼$N的脑部
        $N被急驰而至的"HIC"九天真雷"HIW"轰的面目焦黑\n
"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
k=funn*2;
enemy[j]->receive_wound("kee",k);
enemy[j]->apply_condition("hellthunder",random(10));
enemy[j]->start_busy(1);
COMBAT_D->report_status(enemy[j]);
}
}
else 
{
message_vision(HIG"      $N以极快的速度闪过了攻击\n"NOR,target);
for ( j=0 ; j < i ; j++ )
{
if(!enemy[j]) continue;
COMBAT_D->report_status(enemy[j]);
}
}
}
return 1;
}
int act1(object me)
{
if(!me) return 1;
me->delete_temp("hellfire");
tell_object(me,HIG"你精神一振, 仿佛天雷地火再度环绕于体内!!\n"NOR);
if(me->query("spells/hellfire/level")<100) spell_improved("hellfire",random(100));
return 1;
}
