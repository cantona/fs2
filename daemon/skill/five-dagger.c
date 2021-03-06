// five-dagger.c  .........名字待真昨
// 五招就好..........:P

#include <ansi.h>
#include <combat.h>
inherit SKILL;
inherit SSERVER;

void bleed(object me, object victim, object weapon, int damage);
string *parry_msg=
    ({
   "$n将身体靠向$N, 一招‘ 沾衣十八跌 ’, 将$N黏在原地, 使不开招式!\n",
   "$n把手中的$w舞成圆环, 一招‘ 云回圆月 ’, 将$N的攻势尽数挡了下来。\n",
   "$n以静制动, 手中$w平举胸前, 一招‘ 如封似闭 ’, 化解了$N的攻势!\n",
    });

//unarmed, dagger_action

mapping *action = ({
([ "action":"$N使出‘ 兰花拂穴手 ’,指尖微微前指,一道气剑向$n射了去!\n",
        "dodge": -10,
        "parry": -20,
        "damage": 250,
        "force":  240,
        "damage_type":  "穴道受制",
]),

([ "action":"$N一招‘ 清风拂袖掌 ’,双手一挥,向$n扫了一道掌风!\n",
        "dodge": -20,
        "parry": -10,
        "damage": 260,
        "force": 230,
        "damage_type": "刺伤",
]),

([ "action" : "$N‘秋风狂卷’,转而一式‘飞花落叶’,身体如飞花叶落,向$n扑了过去!\n",
        "dodge": -40,
        "parry": 10,
        "damage": 270,
        "force": 290,
        "damage_type": "掌伤",
]),

([ "action":"$N‘云雾漫漫’身法迷蒙,进而一招‘飞瀑长虹’,身躯向前一跃,打向$n!\n",
        "dodge": 20,
        "parry": -10,
        "damage": 290,
        "force": 280,
        "damage_type": "戳伤",
]),
([ "action" : "$N一招‘绝渊逢生’,忽地一式‘洞里乾坤’,$n误入$N的陷井!\n",
        "dodge": -20,
        "parry": 20,
        "damage": 300,
        "force": 280,
        "damage_type": "掌伤",
]),

//weapon_action

([ "action":"$N手持$w,一招‘翠柏迎人’,紧跟一招‘荆棘拒客’,向$n的双臂连刺数回!\n",
        "dodge": -20,
        "parry": -10,
        "damage": 240,
        "force":  60,
        "damage_type":  "刺伤",
]),

([ "action":"$N把手中$w舞了开,‘玄机暗藏’引诱$n上当,随后一招‘谷里乾坤’刺向$n!\n",
        "dodge": 25,
        "parry": -10,
        "damage": 280,
        "force": 70,
        "damage_type": "刺伤",
]),
([ "action":"$N舞动$w一招‘谷里遇劫’疾向$n的咽喉刺去,而后身形往旁一纵‘绝地逢生’快速地避开!\n",
        "dodge": -40,
        "parry": -20,
        "damage": 240,
        "force": 70,
        "damage_type": "刺伤",
]),
([ "action":"$N忽地面露喜色,双手急捧,一式‘神农遗经’向$n递了过去,倏地$N双手一张,大叫一声‘琉璃散晖’!\n",
        "dodge": 20,
        "parry": -20,
        "damage": 260,
        "force": 80,
        "damage_type": "刺伤",
]),
([ "action":"$N招式一转,‘古木苍天’进而大叫一声‘[1;33m兰陵气剑～～[0m’,手中$w向$n任脉大穴射出七道真气!\n ",
        "dodge": 20,
        "parry": -20,
        "damage": 300,
        "force": 90,
        "damage_type":"刺伤",
        "post_action": (: bleed :),
]),
});

//超强攻击

void bleed(object me, object victim, object weapon, int damage)
{
        if(damage > 40)
         {
          victim->apply_condition("bleeding", random((int)damage / 10 +
          (int)me->query_skill("lan-dagger",1)/10));
          message_vision(sprintf("[1;33m$N‘ 兰陵气剑 ’刺透了$n身上的任脉大穴, $n的身上血斑点点。[0m\n"),me,victim);
         }
}

mapping query_action(object me, object weapon)
{
        object wea=me->query_temp("weapon");
      if  (wea!=0)
            return action[random(5)+5];
      else
          return action[random(5)];
}

int valid_learn(object me)
{
        if(!me->query_temp("weapon"))
           tell_object(me,"没有针怎么练\n");
return 1;

        if(me->query_skill("cure")*1<=me->query_skill("seven-needle",1))
return notify_fail("你的医疗技能太差了吧! 怎么拿刺人! 万一割错了很痛的呢! \n");
       return 1;
}

int valid_enable(string usage)
{
/*      object me=this_player();
      object wea=find_object(me->query_temp("weapon"));
         {
          if(wea!=1)
          if(wea->query("skill_type")=="dagger")
           {
            me->map_skill("dagger","seven-dagger");
            me->map_skill("parry","seven-dagger");
            me->map_skill("unarmed",0);
            return (usage=="dagger")||(usage=="parry");
           }
          me->map_skill("unarmed","seven-dagger");
          me->map_skill("dagger",0);
          me->map_skill("parry",0);
          return (usage=="unarmed");
         }     */
        return (usage=="dagger");
}

int practice_skill(object me)
{
        if(!me->query_temp("weapon") || !me->query_temp("secondary_weapon") )
          return notify_fail("练七奇炙针诀还是要拿根针吧!....\n");
        if( (int)me->query("gin") < 5 )
          return notify_fail("你的精不够，无法练习。\n");
        if( (int)me->query("kee") < 30 )
          return notify_fail("体力不够啰! 休息一下再继续练吧.\n");
        if( (int)me->query("force") < 1 )
          return notify_fail("目前内力不足,休息一会儿再练吧.\n");
        me->receive_damage("gin", 5);
        me->receive_damage("kee", 30);
        me->add("force", -1);
        return 1;
}

string query_parry_msg(string limb)
{
        return parry_msg[random(sizeof(parry_msg))];
}
