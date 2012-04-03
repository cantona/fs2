#include <ansi.h>                                                               
inherit F_FUNCTION;                                                             
inherit SSERVER;                                                                
                                                                                
int perform(object me, object target)                                           
{
    object ob;
    int age=me->query("age",1);
    int lv1=me->query("functions/blood/level");
    int lv=me->query_skill("superforce",1);
    int hurt_value=lv1*age/4+lv*age/4;
	if(me->query("class")!="prayer")
          return notify_fail("你的职业无法使用此技能。\n");
 if( hurt_value > 3000) hurt_value=3000;
                                                                                
        if( !target ) target = offensive_target(me);                            
      if(!target) return notify_fail("你找不到敌人!!\n");
                                                                                
        if( lv1 < 105  )
            return notify_fail("你的[31m血穹苍[0m练的不够纯熟，无法使出[31m穹苍无悔[0m，须105级。\n");      
        if( me->query_skill("superforce",1) < 250 )             
            return notify_fail("你浑天宝鉴心法的火侯尚未足够，须250级。\n");       
                                                                                
        if(!(ob=me->query_temp("weapon")))                                        
        { if(me->query_temp("secondary_weapon"))                                
            return notify_fail("使用[31m穹苍无悔[0m是不需要武器的!!\n");}                       
        if(ob=me->query_temp("weapon"))                                         
        {                                                                       
 if((string)ob->query("skill_type") != "unarmed")
            return   notify_fail("使用[31m穹苍无悔[0m是需要拳脚功夫的!!\n");                      
        }                                                                     
        if(me->query("force")<500)                                            
            return notify_fail("你的内力不够。\n");              
        if(me->query("kee")<180)                                      
            return notify_fail("你的气不够。\n");                
                                                                                
        if(!me->is_fighting(target))         
        {                                                                       
            tell_object(me,"[31m穹苍无悔[0m唯在战斗中才能使用。\n");
            return 1;
        }                                                                       

        message_vision("\t$N蔚蓝的天空开始变成血红色, 方圆十里之内如同掉入[31m阿修罗地狱[0m般!!\n\t$N近似疯狂地唸着浑天宝鉴的练功口诀, 满天的[31m血红气劲[0m越来越浓郁!!\n\t[31m血龙卷风[0m应劲而生了!!\n\n",me,target);
        message_vision("$N吼道:是你逼我使用 [31m穹苍无悔[0m的!!去见阎王吧!!\n\n",me,target);
        me->add("kee",-(hurt_value/20));
        me->add("force",-(hurt_value/4));
        if(70>random(100))
        {                                                                       
        message_vision("$n避无可避，霎时被高速而来的[31m血龙卷风[0m卷成一团，被旋风拉扯的痛楚有如撕肝裂肺！\n",me,target);                                                                   
        message_vision( NOR,me);                                        
  target->receive_damage("kee",hurt_value);
        target->add("force",-hurt_value/2);
        COMBAT_D->report_status(target);                                
        }                                                                       
        else                                                                    
        {                                                                         
        message_vision("$n运功抵御，虽然依旧被[31m血龙卷风[0m卷身而入，可是$n的内功修为不俗, 所以仍然是捡回一条小命!!。\n",me,target);  
        target->receive_damage("kee",hurt_value/10);
        target->add("force",-hurt_value/10);
        COMBAT_D->report_status(target);                                
        }                                                                        
        message_vision("[31m「穹苍无悔”[0m使出后，$N大耗内力、[36m天阙穴[0m骤然疼痛，颓然跪倒在地\n",me,target); 
   me->start_busy(1);
        if(lv1 < 150) function_improved("blood",random(500));
        message_vision( NOR,me);                                                
        return 1;                                                               
}                                                                               

