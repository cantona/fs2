#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int ski_value,fun;
        string msg;
        object ob;
        fun=me->query("functions/ten_kee/level");
        if( !target ) target = offensive_target(me);
        if(!target) return notify_fail("你找不到敌人!!!\n");
        if( me->query_skill("god-shooting",1) < 20 )
        return notify_fail("你的箭法技巧不足。\n");
if( me->query("family/family_name") != "射日派" && me->query("id")!="swy" )
        return notify_fail("只有射日派的弟子才能用十万火急\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="archery")
return notify_fail("要装备弓才能用吧。\n");
        if(me->query("force")<150)
        return notify_fail("你的内力不够。\n");
        if(me->query("kee")<150)
        return notify_fail("你的气不够。\n");
        if(!me->is_fighting(target))
        return notify_fail("十万火急在战斗中才能使用。\n");
if(target->is_busy())
return notify_fail("敌人 BUSY 中，快攻击吧！\n");
ski_value=random(50)+fun*2;
message_vision(HIR"
       $N体内功力潜运，真气源源不断在体内流转，将真气换形成幽冥之箭

       配合着缥缈的身法在$n四周环绕，幽冥箭正凝聚在弓上蓄势待发

                    $N将幽冥箭放出，形成流星箭法之最终式

                                 ‘"HIM"十万火急"HIR"’

       幽冥箭因急速放出，而燃烧四周空气引起火焰，瞬时一片火光！

"NOR,me,target);
// 加上成功率 by swy
// 再给我偷改我就 ooxx by swy
if(80>random(100)) {
        if( ski_value <= 25 ) {
           me->add("force",-100);
          write(HIR"在攻向敌人之前，幽冥箭渐渐消逝。\n"NOR);
          }
          else if( ski_value < 80 )
          {
          me->add("force",-100);
          target->receive_damage("kee",(fun*3),me);
          target->start_busy(1);
          write ( "自己发觉箭术不够精湛，且内力不够精纯。\n");
          }
          else if( ski_value < 120)
          {
           me->add("force",-100);
           target->start_busy(2);
           target->receive_damage("kee",(fun*5),me);
           write(HIR"幽冥箭已能从敌人身边呼啸而过，使的敌人受创不小。\n"NOR);
                 }
          else if( ski_value < 160 )
          {
           me->add("force",-100);
           target->start_busy(3);
           target->receive_damage("kee",(fun*7),me);
           write(HIR"幽冥箭已能八成机率命中对方，使敌人受到严重的射伤。\n"NOR);
          }
          else
          {
           me->add("force",-100);
           target->start_busy(4);
           target->receive_damage("kee",(fun*9),me);
           write(HIR"在你的攻击之下，幽冥箭正确的命中敌人，敌人痛苦的倒在地上呻吟。\n"NOR);
           }
           }
else {
message_vision(HIW"$N的幽冥箭全数被$n躲过了。\n"NOR,me,target);
}
        if(fun < 100) {
        function_improved("ten_kee",random(500)); }
        me->start_busy(1);
        COMBAT_D->report_status(target);
        message_vision( NOR,me);
        return 1;
}
