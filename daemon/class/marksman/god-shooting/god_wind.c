#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int ski_value,fun,lv,a;
        string msg;
        object ob;
        fun=me->query("functions/god_wind/level");
lv = random(fun/19);
        if( !target ) 
        target = offensive_target(me);
        if(!target) 
        return notify_fail("你找不到敌人!!!\n");
        if( me->query_skill("god-shooting",1) < 100 )
        return notify_fail("你的箭法技巧不足。\n");
if( me->query("family/family_name") != "射日派" && me->query("id")!="superobs" )
        return notify_fail("只有射日派的弟子才能用十万火急\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
        return notify_fail("要装备弓才能用吧。\n");
        if(me->query("force")<400)
        return notify_fail("你的内力不够。\n");
        if(me->query("kee")<150)
        return notify_fail("你的气不够。\n");
        if(!me->is_fighting(target))
        return notify_fail("神风舞九翎在战斗中才能使用。\n");
message_vision(HIR"
$N体内功力潜运，真气源源不断在体内流转，手中箭翎在翻转中箭化流星，直袭天际

                           流星箭法绝式之一

                       ‘"HIM"神风舞九翎"HIR"’

箭翎由空直取$n，箭翎因神风催动箭速燃烧四周空气引起火焰，瞬时一片火光！

"NOR,me,target);
if (70 > random (100))
{
   for( a=1;a<=lv;a++)
{
message_vision(HIW"箭如"HIC"流星"HIW"，不断由天际朝$n周身破绽袭去!"NOR"\n",me,target);
           target->receive_damage("kee",fun*3,me);
        function_improved("god_wind",random(500));
           COMBAT_D->report_status(target);
}
}
else
{
write(HIR"箭的准头失去，已偏离目标!"NOR"\n",me,target);
}
      }
