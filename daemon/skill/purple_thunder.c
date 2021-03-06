#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void sp_attack1(object me, object victim, object  weapon, int damage);
void sp_attack2(object me, object victim, object  weapon, int damage);
void sp_attack3(object me, object victim, object  weapon, int damage);
void sp_attack4(object me, object victim, object  weapon, int damage);
void sp_attack5(object me, object victim, object  weapon, int damage);
void sp_attack6(object me, object victim, object  weapon, int damage);
void sp_attack7(object me, object victim, object  weapon, int damage);
int kar=this_player()->query("kar",1);
int cps=this_player()->query("cps",1);
int str=this_player()->query("str",1);
int cor=this_player()->query("cor",1);
int int1=this_player()->query("int",1);
int spi=this_player()->query("spi",1);
int sp_value;


mapping *action = ({
//1
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，快速将$w"HIW"往上而下劈落，使出"HIY"【"MAG"春雷暴殛"HIY"】"HIW"，$w"HIW"四周蕴含雷劲，如春雷般朝$n"HIW"狂袭而去。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                120,
                "post_action":  (: sp_attack1 :),
                "force"      :                120,
                "damage_type":               "震伤"
        ]),

//2
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，并将$w"HIW"配合手中螺旋劲，使出"HIY"【"MAG"天旋雷转"HIY"】"HIW"，雷劲随着螺旋劲在$w"HIW"四周围绕着，急速的朝着$n"HIW"击去。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                150,
                "force"      :                150,
                "damage_type":               "震伤"
        ]),

//3
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，然后迅速将$w"HIW"朝地上击去，使出"HIY"【"MAG"沉雷地狱"HIY"】"HIW"，雷劲由$w"HIW"传至地下，最后雷劲在$n"HIW"地下爆发。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                180,
                "force"      :                180,
                "damage_type":               "震伤"
        ]),

//4
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，并将$w"HIW"抛至空中以气御之，使出"HIY"【"MAG"冬雷霹雳"HIY"】"HIW"，$N利用真气迅速牵引$w"HIW"朝$n"HIW"劈去。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                210,
                "force"      :                210,
                "damage_type":               "震伤"
        ]),

//5
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，使出"HIY"【"MAG"狂雷震九霄"HIY"】"HIW"，$w"HIW"瞬时承受不了如此大的气劲，将气劲传至空气，瞬时形成一股蕴含雷劲之旋风朝$n"HIW"袭去。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                240,
                "force"      :                240,
                "damage_type":               "震伤"
        ]),
//6
        ([
                "action"     :  
""HIW"$N将紫雷气劲缓缓运入$w"HIW"中，并将$w"HIW"朝地面狂劈，使出"HIY"【"MAG"惊雷爆五岳"HIY"】"HIW"，地面承受不住如此强大气劲瞬时地裂，气劲随着裂缝朝$n"HIW"袭去。"NOR"",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                270,
                "post_action":  (: sp_attack6 :),
                "force"      :                270,
                "damage_type":               "震伤"
        ]),

//7
        ([
                "action"     :  
""HIW"$N将紫雷气劲发挥到极限，使出"HIY"【"MAG"怒雷撕天裂地"HIY"】"HIW"，瞬时风云变色，只见$N利用雷劲隔空将手中$w"HIW"劈向$n"NOR"。",
                "dodge"      :               -100,
                "parry"      :               -100,
                "damage"     :                300,
                "force"      :                300,
                "damage_type":               "震伤"
        ]),

});

int valid_learn(object me)
{
       if(!me->query("quest/purple_thunder",1)){
        tell_object(me,"你还不够资格练紫雷七击。\n");
        return 0;
                                               }
       if( (me->query("potential") - me->query("learned_points")) < 5 ) {
        tell_object(me, "你的潜能不到五点，无法练紫雷七击。\n");
        return 0;
                                                                         }
        me->add("potential", -5);
        return   1;
}

int valid_enable(string usage)
{
return (usage=="unarmed" || usage=="blade" || usage=="sword" || usage=="stabber" || usage=="dagger" || usage=="whip" || usage=="parry" );
}

mapping query_action(object me, object *weapon)
{

 int skill_level,limit,i;

 skill_level = (int)(me->query_skill("purple_thunder",1));
 limit= skill_level;

        if (limit < 15)
                return action[random(1)];
        else if (limit < 30)
                return action[random(2)];
        else if (limit < 45)
                return action[random(3)];
        else if (limit < 60)
                return action[random(4)];
        else if (limit < 75)
                return action[random(5)];
        else if (limit < 90)
                return action[random(6)];
        else
          return action[random(7)];
}

void sp_attack1(object me, object victim, object weapon, int damage)
{
        if(me->query("max_force") >= 2000)
        {
                me->add("force",-200);
victim->start_busy(2);

message_vision(HIC"$N暗运雷劲，使得$n因受真气受雷劲所阻因而动弹不了。\n"NOR,me,victim);
        }
}

void sp_attack6(object me, object victim, object weapon, int damage)
{
int i,force;
force=me->query("max_force")/400;
if(force < 1) force=1;
if(force > 5) force=5;
if(me->query("max_force") >= 2000)
{
  for(i=1;i<=force;i++)
  {
    switch(i)
    {
     case 1:
message_vision(sprintf(""HIC"$N使出惊雷破五岳之"HIR"‘破南岳’"NOR""HIC"，雷劲朝$n的左手击去。\n"),me,victim);
     break;
     case 2:
message_vision(sprintf(""HIC"$N使出惊雷破五岳之"HIR"‘破北岳’"NOR""HIC"，雷劲朝$n的右手击去。\n"),me,victim);
     break;
     case 3:
message_vision(sprintf(""HIC"$N使出惊雷破五岳之"HIR"‘破东岳’"NOR""HIC"，雷劲朝$n的左脚击去。\n"),me,victim);
     break;
     case 4:
message_vision(sprintf(""HIC"$N使出惊雷破五岳之"HIR"‘破西岳’"NOR""HIC"，雷劲朝$n的右脚击去。\n"),me,victim);
     break;
     case 5:
message_vision(sprintf(""HIC"$N使出惊雷破五岳之"HIR"‘破中岳’"NOR""HIC"，雷劲朝$n的身躯击去。\n"),me,victim);
     break;
     }
message_vision(sprintf(HIC"$N确实命中$n各处，$n体内各处雷劲流窜。\n"NOR),me,victim);
         victim->receive_wound("kee",150,me);
victim->start_busy(1);
          COMBAT_D->report_status(victim, 1);
   }
   me->add("force",-70);
   COMBAT_D->report_status(victim, 1);
} 
else
message_vision(sprintf("结果$N的内劲不够使不出来。\n"),me,victim);
}


