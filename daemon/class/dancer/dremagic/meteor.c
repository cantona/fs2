#include <ansi.h>
inherit F_SPELL;
inherit SSERVER;
int fun;
int skl;
int fk;
int conjure(object me, object target)
{
        string msg;
                
                
        fun=me->query("spells/meteor/level");
                skl = (int)(me->query_skill("dremagic", 1));
fk=(fun+skl)/2;
     if (!me->query("spells/meteor/level"))
     return 0;
        if( !target ) target = offensive_target(me); 
        if(!me->is_fighting(target) )
        return notify_fail("这法术只能对战斗中的对手使用。\n");
if(me->query("allow_meteor")!=1)
  return notify_fail("偷学的不能使用喔\n");       

if((me->query("family/family_name")!="夜梦小筑")&&(me->query("id")!="cgy"))
return notify_fail("只有舞者才能使用。\n");
        if((int)me->query("atman") < 300)
                return notify_fail("你的法力不够！\n");

        if((int)me->query("gin") < 30 )
                return notify_fail("你的精神没有办法有效集中！\n");
            if(me->query_temp("meteor")==1)
        return notify_fail("你正在施法中\n");

        me->add("atman", -300);
        me->receive_damage("gin", 30);

         msg = CYN "$N突然将双手向上高举口中唸着：\n" NOR ;
         msg += HIC "天上的星辰啊！倾听我的请求！用妳的烈焰燃烧一切邪恶！！\n" NOR ;
         msg += HIW "         终极火焰术"HIR"  流  星  雨  \n" NOR;
         msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
         msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 msg += HIR ": : : : : : : : : : : : : : : : : : : : : : : : : :: : : : : : : : : : : : : : : : : : : : : \n" NOR;
                 message_vision(msg, me, target);
                me->set_temp("meteor",1);
       call_out("act1",3,msg,target,me,fun,fk);
       return 1;
}
int act1(string msg,object target,object me,int fun,int fk) {
        int i;
        object *enemy;
                enemy = all_inventory( environment(me) );
        me->set_temp("meteor",0);
   for( i=0; i<sizeof(enemy); i++ )
   {
        if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) &&
            !enemy[i]->query("no_kill") && enemy[i]!=me &&
            !in_edit(enemy[i]) && !in_input(enemy[i]) && !enemy[i]->query_temp("netdead") &&
            !wizardp(enemy[i]))
        {     if(!(me->query("env/no_meteor_ppl") && userp(enemy[i])))
        {

           if(random(fk)>20)
        {
            msg = HIM "结果"+enemy[i]->query("name")+"被从天而降的陨石打中！\n" NOR;
                        enemy[i]->kill_ob(me);
                        me->kill_ob(enemy[i]);
            enemy[i]->receive_damage("kee", fun*5+50,me);
            COMBAT_D->report_status(enemy[i]);
        } else {
                msg = HIM "可是"+enemy[i]->query("name")+"以极快的速度躲开了陨石。\n" NOR;
        }
        }        
        message_vision(msg, me, target);
        
                }

        
                }
                if(fun<100) spell_improved("meteor",random(500));
                me->start_busy(1);
        return 1;
}

