#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;
                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/black/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/16;
	if(me->query("class")!="prayer")
          return notify_fail("你的职业无法使用此技能。\n");
    if( hurt_value > 700) hurt_value=700;
                                                                                
        if( !target ) target = offensive_target(me);                            
        if( !target ) return notify_fail("你找不到敌人!!\n");
                                                                                
        if( lv1 < 60  )
        return notify_fail("你的[30m玄混沌[0m练的不够纯熟，须要玄混沌 60 级。\n");      
        if( me->query_skill("superforce",1) < 90 )             
        return notify_fail("你浑天宝鉴心法的火侯尚未足够，须要90级。\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        {
            if(me->query_temp("secondary_weapon"))
            return notify_fail("你不空手是无法使用[30m混沌地裂掌[0m的！！\n");
        }
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
            if((string)ob->query("skill_type") != "unarmed")
            return notify_fail("你不空手是无法使用[30m混沌地裂掌[0m的!\n");                      
        }
        if(me->query("force")<200)                                            
            return notify_fail("你的内力不够。\n");              
        if(me->query("kee")<140)                                      
            return notify_fail("你的气不够。\n");                
                                                                                
        if(!me->is_fighting(target))                                                  
        {                                                                       
            tell_object(me,"[30m混沌地裂掌[0m唯在战斗中才能使用。\n");
            return 1;
        }                                                                       
        message_vision("\t$N体内的真气有如盘古开天地一般，真气乱窜，\n\t似乎就要爆体而出, 只有将此一气劲运输到你的双掌间中!!\n\t只见你双手的筋肉暴涨了数倍之多!!\n",me,target);
        message_vision("$N双拳漫布混沌气劲，只觉不吐不快，强招[30m混沌地裂掌[0m挟着轰然之势向敌人而去 .[0m！\n",me,target);
                                                                                
        me->add("kee",-hurt_value/10);
        me->add("force",-hurt_value);
        if(80 > random(100))
        {                                                                       
        message_vision("$n的双掌与[30m混沌地裂掌[0m相交较劲，却惨遭雄浑的混沌内劲震断双臂，掌劲触体后另你马上开肠破肚！！\n",me,target);                                   
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/10);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n奋力向后一跃，闪避了[30m混沌地裂掌[0m的开山裂碑的杀伤力。\n",me,target); 
        message_vision( NOR,me);                                        
        target->receive_damage("kee",hurt_value/14);
        target->add("force",-hurt_value/18);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[34m「混沌地裂掌”[0m使出后，$N立刻纵身扑进$n，继续抢攻",me,target); 
        me->start_busy(1);
        if(lv1 < 100) function_improved("black",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}
                                                                             
