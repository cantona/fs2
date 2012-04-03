#include <ansi.h>
int wind(object me,int lv);
int perform(object me,object ob)
{
int lv;
me=this_player();
lv=me->query("functions/wind-steps/level");
if(me->query("force") < 500 )return notify_fail("你的内力不够, 休息一下再用吧!!\n");
if (me->query("ninja/firstpart") != 1)
return 0;
   if( me->query_skill_mapped("dodge")!="dark-steps" )
         return notify_fail("????????????\n");
if(me->query_temp("wind") ==1 ) return notify_fail("你已经使用清风术了!!\n");
if(me->query("class") !="killer" ) return notify_fail("你的职业无法使用!!\n");
if(me->is_fighting()) me->start_busy(1);
message_vision(HIC"$N运起分功化影之清风术, 身形步伐顿时变得轻快起来!!\n"NOR,me);
me->add("force",-500 );
me->set_temp("wind",1);
me->add_temp("apply/dodge",lv);
me->add_temp("apply/move",lv);
me->add_temp("apply/parry",lv);
me->add_temp("apply/armor",lv);
me->add_temp("apply/defense",lv);
call_out("wind",80+lv,me);
return 1;
}
int wind(object me,int lv)
{
if(!me) return 1;
lv=me->query("functions/wind-steps/level");
message_vision(HIY"$N身边的清风渐渐消散, $N行动也变得迟缓起来!!\n"NOR,me);
me->delete_temp("wind",1);
me->add_temp("apply/dodge",-lv);
me->add_temp("apply/move",-lv);
me->add_temp("apply/parry",-lv);
me->add_temp("apply/armor",-lv);
me->add_temp("apply/defense",-lv);
if(me->query_function("wind-steps",1) < 100)
              {
me->function_improved("wind-steps",random(300)+100);
              }
return 1;
}
