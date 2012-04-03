/*
改版构想
第一版只以吸取内力为主，在看过笑傲江湖后，发现被吸者会全身无力，所以
在第二版将改成等级越高能吸的东西越多(精气神，内力)
                                                by bss
*/
#include <combat.h>
#include <ansi.h>
#define VERSION "第一版"
inherit SSERVER;
inherit F_FUNCTION;
int perform(object me, object target)
{
        object *enemy,ob;
        int damage,i,fun,accept,e_force,e_f_c,flag;
        flag=0;
        enemy=me->query_enemy();
        i=sizeof(enemy);
        if(i > 4)
        {
                i=4;
        }
        fun=me->query("functions/north-force/level");
        if(me->query_skill("sunforce",1)< 100)
           return notify_fail("你的一阳心法根基不够，"+
                              "没办法使出北冥神功。\n");
        if(!me->query("marks/north-force"))
                return 0;
        if(me->query("family/family_name") != "段家")
                return notify_fail("非段家弟子不能用！！\n");
        if(!me->is_fighting(target))
                return notify_fail("北冥神功只能在战斗中使用。\n");
        if(me->query("kee") < 1000)
                return notify_fail("你的气不够。\n");

        message_vision(HIG"
                $N运起全身真劲，使得全身的骨骼不断的霹啪作响，
                大喝一声:"+BLINK+HIC+"「北冥神功”"NOR+HIG"，右手开始不断的在身前绕
                圈，越绕越快，渐渐地形成了一个漩涡力场，四周的
                人只觉得一股极大的吸力从力场中心发出，身体不由
                自主的朝力场投去。\n"NOR,me);
        while(i--)
        {
               if(fun <= 20 && fun >=0)
               {
                        if(30 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"一时之间慌了手脚，竟被$n"HIR"吸走了自身内力中的一成!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*1/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(4 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*2/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"看准了$n"HIY"所引发力场的破绽，一个闪身，躲开了$n"HIY"这次攻击。\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 40 && fun >20)
               {
                        if(45 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"一时之间慌了手脚，竟被$n"HIR"吸走了自身内力中的两成!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*2/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(6 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*3/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"看准了$n"HIY"所引发力场的破绽，一个闪身，躲开了$n"HIY"这次攻击。\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 60 && fun >40)
               {
                        if(60 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"一时之间慌了手脚，竟被$n"HIR"吸走了自身内力中的三成!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*3/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(8 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*4/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"看准了$n"HIY"所引发力场的破绽，一个闪身，躲开了$n"HIY"这次攻击。\n"NOR,enemy[i],me);
                        }
                }
               if(fun <= 80 && fun >60)
               {
                        if(75 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"一时之间慌了手脚，竟被$n"HIR"吸走了自身内力中的四成!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*4/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(10 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*5/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"看准了$n"HIY"所引发力场的破绽，一个闪身，躲开了$n"HIY"这次攻击。\n"NOR,enemy[i],me);
                        }
                }
                if(fun > 80)
                {
                        if(80 > random(100))
                        {
                                message_vision(HIR"
$N"HIR"一时之间慌了手脚，竟被$n"HIR"吸走了自身内力中的五成!!!\n"NOR,enemy[i],me);
                        flag=flag+1;
                        e_force=enemy[i]->query("force");
                        e_force=e_force*5/10;
                        enemy[i]->add("force",-(e_force));
                        me->add("force",e_force);
                                if(12 > random(100))
                                {
                                e_f_c=enemy[i]->query("force_factor");
                                e_f_c=e_f_c*6/10;
                                enemy[i]->add("force_factor",-(e_f_c));
                                }
                        COMBAT_D->report_status(enemy[i]);
                        }
                        else
                        {
               message_vision(HIY"
$N"HIY"看准了$n"HIY"所引发力场的破绽，一个闪身，躲开了$n"HIY"这次攻击。\n"NOR,enemy[i],me);
                        }
                }
        }
        me->add("kee",-200);
        message_vision(HIR"$N"HIR"因为使出"HIC"「北冥神功”"HIR"中的吸功法，消耗了大量的气!!!\n"NOR,me);
        COMBAT_D->report_status(me);
        if(!flag) flag=1;
        if(fun<100) { function_improved("north-force",random(300)*flag); }
        return 1;
}


