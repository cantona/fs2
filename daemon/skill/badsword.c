#include <combat.h>
#include <ansi.h>
inherit SKILL;
void berserk(object me, object victim, object  weapon, int damage);
void conti(object me, object victim, object  weapon, int damage);
void hurt(object me, object victim, object  weapon, int damage);
mapping *action = ({
//1
(["action":HIG"《魔鹰蚀日》"NOR"
$N使一招魔日剑法中的"HIG"「魔鹰蚀日”"NOR"，手中$w如一条老鹰般直直刺向$n的$l。",
        "dodge":-20,
        "parry":-10,
        "force": 70,
        "damage":30,
        "damage_type":"刺伤",
]),//2
(["action":HIR"《日光无影》"NOR"
$N使出魔日剑法中的"HIR"「日光无影”"NOR"，剑光霍霍斩向$n的$l。",
        "dodge":-20,
        "parry":-10,
        "force": 80,
        "damage":50,
        "damage_type":"割伤",
]),//3
(["action":HIY"《御风而行》"NOR"
$N一招"HIY+"「御风而行”"NOR"，身形陡然滑出数尺，手中$w斩向$n的$l，然而此乃招中有招。",
        "dodge":-30,
        "parry":-10,
        "force": 90,
        "damage":70,
        "damage_type":"割伤",
]),//4
(["action":HIB"《日落西山》"NOR"
$N手中$w中宫直进，一式"HIB"「日落西山”"NOR"对准$n的$l狠狠刺出数剑。",
        "dodge":-40,
        "parry":-20,
        "force":100,
        "damage":70,
        "damage_type":"刺伤",
        "post_action": (: hurt :),
]),//5
(["action":HIY"《金光泻地》"NOR"
$N将气劲灌入手中$w，纵身一跃，使一手"HIY"「金光泻地”"NOR"顿时一片金光罩住$n全身。",
        "dodge":-40,
        "parry":-20,
        "force":110,
        "damage":100,
        "damage_type":"刺伤",
]),//6
(["action":HIM"《艳阳高照》"NOR"
$N将$w凭空一指，一招魔日剑法中的"HIM"「艳阳高照”"NOR"快速的刺向$n的$l。",
        "dodge":20,
        "parry":-30,
        "damage":100,
        "force":120,
        "damage_type":"刺伤",
        "post_action": (: berserk :),
]),//7
(["action":HIC"《柳暗花明》"NOR"
$N手中$w向外一分，使一招"HIC"「柳暗花明”"NOR"反手对准$n$l一剑刺去。",
        "dodge":-20,
        "parry":30,
        "force":130,
        "damage":110,
        "damage_type":"刺伤",
]),//8
(["action":HIY"《旭日东升》"NOR"
$N横剑上前，身形一转手中$w使一招魔日剑法中的"HIY"「旭日东升”"NOR"画出一道光弧斩向$n的$l。",
        "dodge":-30,
        "parry":-20,
        "force":140,
        "damage":120,
        "damage_type":"割伤",
        "post_action": (: conti :),
]),//9
(["action":HIB"《拨云见日》"NOR"
$N一转身，使出一招魔日剑法中的"HIB"「拨云见日”"NOR"，手中$w对准$n的$l刺出数剑。",
        "dodge":-20,
        "parry":-40,
        "force":150,
        "damage":130,
        "damage_type":"刺伤",
]),//10
(["action":HIR"《天虹贯日》"NOR"
$N手中$w朝地一挥，使一招"HIR"「天虹贯日”"NOR"，地面裂出一道道剑痕，数道剑气迅速的往$n身上砍去。",
        "dodge":-20,
        "parry":-10,
        "force":160,
        "damage":140,
        "damage_type":"刺伤",
        "post_action": (: berserk :),
]),//11
(["action":HIW"《偷天换日》"NOR"
$N手中$w朝天空一丢，使一招"HIW"「偷天换日”"NOR"，$w射出万丈光芒，击出一道剑气击向$n。",
        "dodge":-20,
        "parry":-30,
        "damage":150,
        "damage_type":"刺伤",
        "post_action":(: conti :),
]),//end
// 让别派不能用 by swy
(["action":"你不是恶人谷的人所以不能使出。",
   "damage":10,
"damage_type":"白痴伤",
]),
});
int valid_learn(object me)
{
        object wea1,wea2;
        wea1 = me->query_temp("weapon");
        wea2 = me->query_temp("secondary_weapon");
        if( (int)me->query("max_force") < 50 )
                return notify_fail("你的内力不够，没有办法练魔日剑法。\n");
        if(me->query("class")!="bandit")
                return notify_fail("你怎么样都学不会魔日剑法。\n");
        if( (wea1 && wea1->query("skill_type")!="sword") || (wea2 && wea2->query("skill_type")!="sword") )
                return notify_fail("你必须先找一把剑才能练剑法。\n");
        return 1;
}
int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}
void hurt(object me, object victim, object  weapon, int damage)
{
        int bellpower;
        bellpower = (int)me->query("bellicosity") / 50+1;
        damage=bellpower*10;
        if( damage >400){damage=400;}
        if( random(10) >= 3 && !me->query_temp("conti"))
        {
          victim->receive_damage("kee", damage ,me);
message_vision(sprintf(BLU"$N将全身之劲力注入剑中，顺势将剑刺向$n，$n瞬间被$N击中数剑！！！\n"NOR),me,victim);
          COMBAT_D->report_status(victim);
          me->add("force",-5*bellpower);
        }
}
void berserk(object me, object victim, object  weapon, int damage)
{

     message_vision( sprintf(HIW"$N真气凝聚，准备使出"HIC+"「魔日裂风斩”"HIW"，$N身体四周爆发出一股旋风！！\n"NOR),me,victim);
     message_vision(sprintf(HIW"$N四周剑气越转越急，「咻”一声化作一道光束朝$n激射而去。\n"NOR),me,victim);
     if( random(10) >= 3 && !me->query_temp("conti") )
        {
            message_vision(sprintf(HIR"剑气直接命中$n，$n应声而倒。\n"NOR), me ,victim);
            victim->start_busy(1);
            me->add("force",-100);
        }
        else
        {
             message_vision(sprintf(HIR"敌人纵身急避，躲开了这致命的一击。\n"NOR),me,victim);
             me->add("force",-100);
        }
}
void conti(object me, object victim, object weapon, int damage)
{
        int i,lose;
        int bellpower = (int)me->query("bellicosity")/500+1;
        if(bellpower>8)
        bellpower=8;
          if( me->query_temp("conti") == 0 && random(10) >= 3)
          {
            lose = (int)me->query_skill("badsword", 1)/50+2+bellpower;
            me->set_temp("conti",1);
message_vision("\n\n\t\t\t"BRED+HIW"☆魔★日☆再★现☆"NOR"\n\n"NOR, me, victim);
            for(i=0;i<=lose;i++)      {
            COMBAT_D->do_attack(me,victim,me->query_temp("weapon"),TYPE_QUICK);
            }
            me->start_busy(1);
            me->delete_temp("conti");
          }
}
mapping query_action(object me, object weapon)
{
int skill_level;
    skill_level = (int)(me->query_skill("badsword",1));
if(me->query("class")!="bandit") return action[11];
    if(skill_level<40)
          return action[ random(4)];
    else if (skill_level<50)
          return action[ random(5)];
    else if (skill_level<60)
          return action[ random(6)];
    else if (skill_level<70)
          return action[ random(7)];
    else if (skill_level<80)
          return action[ random(8)];
    else if (skill_level<90)
          return action[ random(8)+1];
    else if (skill_level<100)
          return action[ random(10)+1];
    else
          return action[ random(8)+3];
}
int practice_skill(object me)
{
        if( (int)me->query("kee") < 30 || (int)me->query("force") < 3 )
        return notify_fail("你的内力或气不够，没有办法练习魔日剑法。\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("你按着所学练了一遍魔日剑法。\n");
        return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("bandit") + "/badsword/" + action;
}
