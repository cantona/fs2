// lonely-sword.c  独孤九剑
/*
#include <ansi.h>
*/
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void berserk(object me, object victim, object  weapon, int damage);
void sp1(object me, object victim, object  weapon, int damage);
void sp2(object me, object victim, object  weapon, int damage);
void sp3(object me, object victim, object  weapon, int damage);
void sp4(object me, object victim, object  weapon, int damage);
string *parry_msg=({
        "$n身躯一引, 将$N的攻势尽数曳了开去。\n",
        "$n把手中武器舞成圆环, 将$N的攻势尽数挡了下来。\n",
        "$n以静制动, 平举手中的剑, 无招胜有招, 化解了$N的攻势!\n",
        });
 string *array_msg=
    ({
      "[1;33m$N大喝一声, 脚踏七星, 带领着众剑士,展开独孤破邪剑阵。\n[0m",
      "[1;33m众人脚踩八卦, 剑化两仪, 团团将敌人围住, 令敌人望之胆怯。\n[0m",
      "[1;33m$N急吸一口气, 带领众人加速运转独孤镇邪剑阵,打的敌人手足无措。\n[0m",
     }); 
mapping *action = ({
        ([
                "action"     :               "$N左手捏个剑诀, 平推而出,诀指上仰, 右手剑朝天不动, 正是一招[1;37m‘[1;34m震剑势[1;37m’[0m",
                "dodge"      :                -20,
                "damage"     :                200,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
         ]),
         ([
                "action"     :                "$N面露微笑, 仰视苍天,使出剑招之极致[1;37m‘闪[1;31m剑[1;37m势’[0m, 但见剑光闪闪",
                "dodge"      :                -10,
                "damage"     :                220,
                "post_action":                (: berserk :),
                "damage_type":                "割伤",
         ]),
         ([
                "action"     :                "$N身形飘忽大喝一声,$N使出独孤九剑之必杀绝招\n"+"[1;32m～～[1;36m破．落．二剑合一势～～[0m\n"+
                                              "$N运起内功心法, 气沉丹田,以气御剑, 只见手中$w化作一道银光, 朝$n急飞而去, 但见银光一闪,",
                "dodge"      :                10,
                "damage"     :                350,
                "post_action":                (: sp3 :),
                "damage_type":                "刺伤",
         ]),

         ([
                "action"     :                "$N身形飘忽大喝一声,使出独孤剑式之必杀绝招\n"+"[1;32m～～荡．撩．二剑合一势～～[1;35m[0m\n"+
                                              "只见$N手中$w急画一个圆, 越画越快, $n只觉周身大穴尽皆笼罩在剑芒之下, 惊骇之余, 一股大力突然涌来,",
                "dodge"      :                10,
                "damage"     :                550,
                "post_action":                (: sp1 :),
                "damage_type":                "砍伤",                                    
         ]),

        ([
                "action"     :               "$N左手持剑, 右手捏个剑诀,双手成环, 缓缓抬起, 这是[1;37m独孤剑式绝式[0m的起手式",
                "dodge"      :                -10,
                "damage"     :                700,
                "post_action":                (: sp2 :),
                "damage_type":               "刺伤",
        ]),

        ([
                "action"     :
"$N施展出[1;37m独孤九剑[0m之精妙绝招\n剑招忽变, 飘逸无伦,歪歪斜斜的使出一招[1;37m‘落[1;36m剑[1;31m势[1;37m’[0m",
                "dodge"      :                -10,
                "damage"     :                800,
                "damage_type":               "刺伤",
        ]),
        ([
                "action"     :
"$N施展出[1;37m独孤九剑[0m之精妙绝招\n剑芒吞吐, 电闪星飞,一招[1;37m‘[1;35m旋剑势[1;37m’[0m, 推送而上",
                "dodge"      :                -10,
                "damage"     :                700,
                "damage_type":               "刺伤",
        ]),
        ([
                "action"     :
"$N施展出[1;37m独孤九剑[0m之精妙绝招\n$N$w越使越快, 突然间转过身来,一声呼喝,唰的一剑, 在$n胸前对穿而过,这一招[1;37m‘[1;34m离[1;37m剑[1;34m势[1;37m’[0m,正是绝高的绝技",
                "dodge"      :                -10,
                "damage"     :                750,
                "post_action":                (: sp4 :),
                "damage_type":               "刺伤",
        ]),

});

mapping query_action(object me, object weapon)
{
   int skill_level, limit;
   skill_level = (int)(me->query_skill("lonely-sword", 1));
   limit= (int)( skill_level/ 10);
   if( me->query_temp("use_form", 1))
      message_vision( array_msg[ random( sizeof( array_msg))], me); 
   if( me->query("quest/lonely-sword"))
   {
      if (limit < 1 )
         return action[random(6 )];
      else if (limit < 2 )
         return action[random(7 )];
      else if (limit < 3 )
         return action[random(8 )];
      else if (limit < 4 )
         return action[random(9 )];
      else if (limit < 5 )
         return action[random(9 )+1];
      else if (limit < 6 )
         return action[random(9 )+2];
      else if (limit < 7 )
         return action[random(9 )+3];
      else if (limit < 8 )
         return action[random(9 )+4];
      else if (limit < 9 )
         return action[random(9 )+5];
         return action[random(9 )+6];
   }
   else
   {
      if (limit < 1 )
         return action[random(1)];
      else if (limit < 2 )
         return action[random(2)];
      else if (limit < 3 )
         return action[random(3)];
      else if (limit < 4 )
         return action[random(4)];
      else if (limit < 5 )
         return action[random(4)+1];
      else if (limit < 6 )
         return action[random(4)+2];
      else if (limit < 7 )
         return action[random(4)+3];
      else if (limit < 8 )
         return action[random(4)+4];
      else if (limit < 9 )
         return action[random(4)+5];
         return action[random(4)+6];
   }
}

void sp1(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m$N[1;37m长啸道:‘剑旋离身，剑啸震山河’, 瞬间剑芒大作,朝$n[1;37m激射而至[0m\n",me,victim);
   victim->add("kee", -(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp2(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m$N[1;37m突然悟出‘练精化气, 练气化神, 练神还虚’之真理, 手中长剑突然消失, 已朝$n[1;37m飞至[0m\n",me,victim);
   victim->add("kee",-(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp3(object me, object victim, object  weapon, int damage)
{
   int skill= me->query_skill("lonely-sword", 1);
   message_vision("[1;37m这起手式一展,跟着剑气突爆‘荡剑．撩剑．过剑．挫剑．离剑．落剑．旋剑．挪剑’,最后双手同时画圆, 复成持剑归原之姿[0m\n",me,victim);
   victim->add("kee",-(skill* 2));
   COMBAT_D->report_status(victim, 1);
   victim->start_busy(1);
}
void sp4(object me, object victim, object  weapon, int damage)
{
   int i, loop;
   int skill= me->query_skill("lonely-sword", 1);
   loop= random( skill/ 10)+ 3;
   if( !me->query("berserk") && random(me->query("combat_exp")) > random(victim->query("combat_exp")))
   {
      me->set_temp("berserk", 1);
      message_vision("[1;37m$N[1;37m了悟了‘剑在神先, 绵绵不绝’之真意, 剑尖瞬间爆出无数大大小小, 正反斜直各种各样的圆圈, 朝$n[1;37m直扑而来[0m\n",me,victim);
      for( i= 0; i< loop; i++)
      {
         message_vision("[1;34m$N[1;34m大声喝道‘剑在神先, 绵绵不绝’, 剑招连绵不绝的朝$n[1;34m攻去[0m\n", me, victim);
         victim->add("kee", -( random( skill)));
         COMBAT_D->report_status(victim, 1);
      }
      me->delete_temp("berserk");
      message_vision("[1;31m一阵连击攻之后, $N[1;31m微感内息不顺,赶紧趁机调息。[0m\n",me);
      me->start_busy(1);
      me->add("force", -skill);
   }
}

void berserk(object me, object victim, object  weapon, int damage)
{ 
   if( random(8) > 3 )
   {
      if( (int)me->query_skill("lonely-sword",1) > random(60)+35 &&me->query("force_factor")>= random(5) && me->query("force")>30)
      {
         if(!me->query_temp("berserk" ))
         {
            me->set_temp("berserk", 1);
            if(me->query("family/family_name") == "独孤传人")
            {
               message_vision( sprintf("\n[1;37m$N[1;37m突然顿悟了‘神与意合, 意与神守’之意境"+
               "使出独孤九剑至极之剑术[31m‘ 荡剑起～撩剑破～旋剑无极’[37m!!![0m\n"),me ,victim);
               message_vision(sprintf("\n[1;34m$N[1;34m刹那间整个人脱胎换骨变得威猛无伦, "+
               "跨开大步, 长剑高举过头, 往$n^[[1;34m迫去\n天地震动, 宇宙翻腾, $n被这股气势震吓住, "+
               "只觉眼前剑芒一闪。[0m\n "), me ,victim);
               victim->start_busy(1);
               victim->receive_wound("kee",100+random(100),me);
               me->add("force",-60);
            }
            me->delete_temp("berserk");
         }
      }
   }
}

int valid_learn(object me)
{
   object ob;
   if( !(ob = me->query_temp("weapon")) || (string)ob->query("skill_type") !="sword")
      return   notify_fail("少了把剑练起来怪不顺手的, 还是拿把剑再来练吧。\n");
   return   1;
}

int valid_enable(string usage)
{
   return ( usage=="sword") || ( usage=="parry" );
}

int practice_skill(object me)
{
  if( (int)me->query("kee") < 25 )
     return notify_fail("你的体力不够了，休息一下再练吧。\n");
  if( (int)me->query("gin") < 5 )
     return notify_fail("你的精力不够了，休息一下再练吧。\n");
  if( (int)me->query("force") < 1 )
     return notify_fail("你的内力不够了，休息一下再练吧。\n");
  me->receive_damage("kee", 25);
  me->receive_damage("gin", 5);
  me->add("force", -1);
  return 1;
}

string perform_action_file(string action)
{
   return CLASS_D("swordsman")+"/lonely-sword/"+action;
}

string query_parry_msg(string limb)
{
   return parry_msg[ random( sizeof( parry_msg))];
}

void skill_improved(object me)
{
tell_object(me,"[1;34m由于你潜心学习，你的独孤九剑更加纯熟了！！[0m\n");
}
