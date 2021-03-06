
#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;
void power(object me, object victim, object weapon, int damage);
void power1(object me, object victim, object weapon, int damage);
void power2(object me, object victim, object weapon, int damage);
mapping *action = ({
   ([
        "action":
"只见$N一步跃空,使出了"HIW"‘白虎落山’"NOR",手中$w气势滂漙有开劈石之势直向$n逼去",
        "dodge"      :                25,
        "parry"      :                25,
        "damage"     :                80,
        "force"      :                80,
        "damage_type":               "劈伤"
   ]),
  ([
        "action"     :
"$N身子缓缓打斜纵身跃出,藉由旋转之势,打出了"HIB"‘恶蛟渡江’"NOR"强大的气劲挟带着滚滚风沙,$w宛如恶蛟般地凶猛,直扑$n而去",
        "dodge"      :                20,
        "parry"      :                20,
        "damage"     :                90,
        "force"      :                90,
        "damage_type":               "劈伤"
   ]),
  ([
        "action"     :
"$N神情从容,手里$w心随意转,一转眼已攻至$n眼前,$N才缓缓道出"HIR"‘血燕归巢’"NOR"这招名称",
        "dodge"      :                15,
        "parry"      :                15,
        "damage"     :                 90,
        "force"      :                100,
        "damage_type":               "劈伤"
   ]),
  ([
        "action"     :
"$N大喝一声,眼中充满血光,霎那间脑海里只有杀,一时间将山贼的本性完全显露出来,手握$w无情地向$n砍杀,一招"HIC"‘怒斩修罗’"NOR"连神也躲不过",
        "dodge"      :                10,
        "parry"      :                10,
        "damage"     :                100,
        "force"      :                100,
        "damage_type":               "劈伤"
   ]),
  ([
        "action"     :
"$N将手中$w一拦,以极快的手法向$n攻去,正是"HIG"‘疾 狼 斩’"NOR"～",
         "dodge"      :                5,
         "parry"      :                5,
         "damage"     :                110,
         "force"      :                110,
         "damage_type":               "斩伤"
   ]),
([
         "action"     :
"$N运起全身劲力，劲贯$w，使出一招"BLINK+HIW"‘袍丁宰牛’"NOR"$N以全身劲力砍向$n$l",
         "dodge"      :               -5,
         "parry"      :               -5,
         "damage"     :                130,
         "force"      :                130,
         "damage_type":               "斩伤"
   ]),
  ([
         "action"     :
"$N纵身跃起，行如影、快如风，一招"HIY"‘金燕横空’"NOR"，分别劈向$n四肢",
         "dodge"      :               -10,
         "parry"      :               -10,
         "damage"     :                140,
         "force"      :                140,
         "post_action":               (: power :),
         "damage_type":               "劈伤"
  ]),
([
         "action"     :
"$N运起全身功力,气集于$w使出一招"BLINK+HIR"‘鬼气贯脑’"NOR"斧劲极快的的波及到$n",
         "dodge"      :               -15,
         "parry"      :               -15,
         "damage"     :                150,
         "force"      :                150,
         "damage_type":               "劈伤"
   ]),
  ([
         "action"     :
"$N横起$w，气贯丹田、反转$w，使出一招"HIR"‘惊天狂龙破’"NOR"，$w的瑞气朝$n身上四射过去",
         "dodge"      :               -20,
         "parry"      :               -20,
         "damage"     :                170,
         "force"      :                170,
         "post_action":               (: power :),
         "damage_type":               "割伤"
  ]),
  ([
         "action"     :
"$N举起$w来，内力一提、劲贯双手，顿时飞沙走石、狂风四起，$N使出一招"HIB"‘擂鼓震山川’"NOR"，使出了前所未有的超爆狂力朝$n身上狂劈过去",
         "dodge"      :               -30,
         "parry"      :               -30,
         "damage"     :                190,
         "force"      :                190,
         "post_action":               (: power :),
         "damage_type":               "劈伤"
  ]),
});
void power(object me, object victim, object weapon, int damage)

{

int i;
 if(me->query("combat_exp") >= 300000 )
 if(me->query("force")>100&&me->query("force_factor"))      

{
   for(i=1;i<=4;i++)
{
    switch(i)
{

case 1:
message_vision(sprintf("$N见$n的攻势瓦解决定使出独门招式之"HIY"‘春秋诗断愁’"NOR"，直取$n的四处要害。\n"),me);


message_vision(sprintf("$N步伐如醉，使出‘春秋诗断愁’－－－"BLINK+HIB"【 春 风 拂 人 醉 】"NOR"，直劈$n的胸部。\n"),me,victim);
break;


case 2:
message_vision(sprintf("$N身轻如燕，使出‘春秋诗断愁’－－－"BLINK+HIY"【 飞 花 逐 人 香 】"NOR"，砍向$n的背部。\n"),me,victim);
break;


case 3:
message_vision(sprintf("$N深锁紧眉，使出‘春秋诗断愁’－－－"BLINK+HIC"【 秋 意 愁 不 断 】"NOR"，直取$n的头部。\n"),me,victim);
break;


case 4:
message_vision(sprintf("$N行如快风，使出‘春秋诗断愁’－－－"BLINK+HIW"【 柳 叶 随 人 痴 】"NOR"，斩向$n的咽喉。\n"),me,victim);
break;
}
     if(me->query_skill("snow-martial",1)>random(150))
{
message_vision(sprintf("结果被$N确确实实的劈中要害，$n身上已血流不止.\n"),me,victim);
            victim->receive_wound("kee",60,me);
          COMBAT_D->report_status(victim, 1);
   me->add("force",-60);
}else{

message_vision(sprintf("结果$N的攻击被$n轻松避了开来。\n"),me,victim);
}
}
}
}
int valid_learn(object me)
{
       
        if(me->query("max_force")<100)
               return notify_fail("喂! 小子, 内力上限要 100 喔，等你长大点再来。\n");
        if(me->query_skill("force",1)<10)
               return notify_fail("你的内功火候不够，不能练破极斧法。\n");
        return 1;

}

 

int valid_enable(string  usage)  {

        if(this_player()->query_skill("max-axe",1) >= 70)
         {
            return (usage=="axe")||(usage=="parry");
         }
             return usage=="axe";
}

 

mapping query_action(object me, object weapon)

{
   int skill;
   skill=me->query_skill("max-axe", 1);
   if( skill < 20)
      return action[random(3)];
   else if( skill < 40)
      return action[random(4)];
   else if( skill < 60)
      return action[random(5)];
   else if( skill < 80)
      return action[random(9)];
   else if( skill < 90)
      return action[random(10)];
   else 
      return action[random(10)];   

}

int practice_skill(object me)

{
        if( (int)me->query("kee") < 30 )
                      return  notify_fail("你的气不够，无法练习破极斧法。\n");
        if( (int)me->query("force") < 5 )
                   return  notify_fail("你的内力不够，不能练习破极斧法。\n");
        me->receive_damage("kee", 30);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)

{
        return CLASS_D("axeman")+"/max-axe/"+action;
}

  


