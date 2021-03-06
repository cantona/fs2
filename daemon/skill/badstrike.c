// badstrike.c by ice
// modify by oda (4/10/96)
// 增加杀气对特攻威力的影响 (5/1/96)
// By Swy 最后修正 QC 98/6/20
// By Chan 从新改写 98/10/07
// By Swy QC 98/10/11 未经许可请勿乱改
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void bleed(object me, object victim, object  weapon, int damage);
void block(object me, object victim, object  weapon, int damage);
void suck(object me, object victim, object  weapon, int damage);
void upforce(object me, object victim, object  weapon, int damage);
void berserk(object me, object victim, object  weapon, int damage);
void remove_effect(object me);

mapping *action = ({
//1
  ([ "action": "$N邪念一动使出[1;37m‘恶向胆边生’[0m，化解$n的层层防守，攻向$n的最弱处$l",
                "dodge":                5,
                "parry":                -20,
                "force":                200,
                "damage":               100,
                "damage_type":  "瘀伤"
        ]),
//2
  ([ "action": "$N使出一招[1;36m‘厄运当头’[0m，击向$n的天庭盖",
        "dodge":        10,
        "parry":        -20,
        "force":        200,
        "damage":       150,
        "damage_type":  "瘀伤"
        ]),
//3
  ([ "action":"$N双眼泛红，破口大骂，突然一招[1;35m‘恶人当道’[0m出其不意的击向$n下鄂",
           "dodge":        -15,
           "parry":        -30,
           "force":        200,
           "damage":       200,
           "damage_type":  "瘀伤"
      ]),
//4
  ([ "action": "$N使出一招[1;34m‘恶意中伤’[0m，无情的往$n的$l狂攻而去",
          "dodge":        -20,
          "parry":        -35,
          "force":        300,
          "damage":       250,
          "post_action":          (: suck :),
          "damage_type":  "瘀伤"
        ]),
//5
  ([ "action": "$N使出[1;33m‘饿虎扑食’[0m，身形如饿虎般欺至$n身前，噬向$n的$l",
           "dodge":        -20,
           "parry":        -50,
           "force":        300,
           "damage":       300,
           "post_action":      (: bleed :),
           "damage_type":  "瘀伤"
        ]),
//6
  ([ "action": "$N身形一变，使出[1;31m‘扼杀诀’[0m，如死神般攻向$n的$l",
           "dodge":       -10,
           "parry":        -40,
           "force":        350,
           "damage":       350,
           "post_action":      (: block :),
           "damage_type":  "瘀伤"
        ]),
//7
  ([ "action": "$N大喝一声，卷起一股[31m‘恶势力’[0m击向$n，要$n屈服于其下",
           "dodge":        -20,
           "parry":        10,
           "force":        400,
           "damage":       400,
           "post_action":      (: upforce :),
           "damage_type":  "瘀伤"
        ]),
//8
  ([ "action": "[32m$N吐气扬声，真气运至最高境界，终极奥义[35m‘鬼哭神嚎’[32m呼之欲出，\n[1;31m无情地想将$n化为灰烬[0m",
         "parry":        -55,
         "dodge":        -10,
         "force":        400,
         "damage":       400,
         "post_action":          (: berserk :),
         "damage_type":  "瘀伤"
        ]),
});

int valid_learn(object me)
{
        int skill, bell;
        object wea1, wea2;
        skill = me->query_skill("badstrike", 1);
        bell = me->query("bellicosity");
        wea1 = me->query_temp("weapon");
        wea2 = me->query_temp("secondary_weapon");

        if( (wea1 && wea1->query("skill_type")!="unarmed") || (wea2 && wea2->query("skill_type")!="unarmed") )
                return notify_fail("练恶霸掌不能使用刀剑等武器。\n");
    if(me->query("class") != "bandit")
       return notify_fail("只有恶人能学恶霸掌!!!\n");
    //限定只有恶人能学badstrike...
        if( (int)me->query_skill("badforce", 1) < 10 )
                return notify_fail("你的恶化魔功不够恶化，无法修练恶霸掌。\n");
        if( (int)me->query("max_force") < 20 )
                return notify_fail("你的内力太弱，无法练恶霸掌法。\n");

        // modify by oda
        //if((int)me->query("bellicosity") < 30 )
        if( (skill<50 && bell<(skill*5)) || (skill>=50 && bell<250) )
                return notify_fail("你的杀气不够，不能修练恶霸掌。\n");

        return 1;
}

int valid_enable(string usage)
{
        if( this_player()->query_skill("badstrike",1)>=50 )
                return ( usage=="unarmed" || usage=="parry" );
        else
                return ( usage=="unarmed" );
}

mapping query_action(object me, object weapon)
{
        int skill_level;
        skill_level=(int)me->query_skill("badstrike", 1);
if(me->query("class")=="bandit") {
if(me->query_temp("damage-busy1") == 1) return action[6];
if(me->query_temp("damage-busy2") == 1) return action[7];
}
        if (skill_level < 10)
                return action[random(2)];
        else if (skill_level < 20 )
                return action[random(3)];
        else if (skill_level < 35 )
                return action[random(4)];
                else if (skill_level < 50 )
                return action[random(5)];
                else if (skill_level < 70 )
                        return action[random(6)];
                else if (skill_level < 90 )
                        return action[random(7)];
        else
                        return action[random(7)+1];
}

void bleed(object me, object victim, object weapon, int damage)
{
        int bellpower;
        bellpower= (int)me->query("bellicosity",1)/500+1;
        damage=bellpower*10;
        if(damage > 400)
        damage=400;
         if(70>random(100) && !me->query_temp("berserk"))
        {
         me->add("force", -3*bellpower);
         victim->receive_wound("kee",damage,me);
         message_vision(HIR"$N使用恶化魔功精义用内力把$n震伤，使$n不停的狂吐鲜血。\n"NOR, me, victim);
         COMBAT_D->report_status(victim);
        }
}

void block(object me, object victim, object weapon, int damage)
{

   if (70>random(100) && !me->query_temp("berserk"))
{
  victim->start_busy(1);
  if(!me->query_temp("damage-busy1")) {
  me->set_temp("damage-busy1",1); }
  me->add("force",-100); //扣内力
  message_vision(HIB"$N暗使内力，使得$n为其恶化魔功所震而暂时无法动弹。\n"NOR, me, victim);
}
}


void suck(object me, object victim, object  weapon, int damage)
{
        int lose;
        int bellpower = (int)me->query("bellicosity")/250+1;
if(victim->query("force")>0&&me->query_skill_mapped("force")=="badforce"&&!me->query_temp("berserk")
   && 70>random(100))
        {
           lose = ((int)me->query_skill("badforce",1)/5+10)*bellpower;
           if(lose > 800) lose=800;
        me->add("kee", lose/2);
        me->add("force",lose);
        victim->add("force",-lose);
        victim->receive_damage("kee",lose/2,me);
        if(victim->query("force",1) < 0) victim->set("force",0);
        message_vision(HIY"$N使出恶化魔功之吸功大法，把$n的功力吸去不少。\n"NOR, me, victim);
        COMBAT_D->report_status(victim);
        }
}

void upforce(object me, object victim, object weapon, int damage)
{
        int skill = (int)me->query_skill("badforce", 1)/10;
        int bellpower = (int)me->query("bellicosity")/300+1;
        if( bellpower > 4 ) bellpower = 4;
        if(skill > 15) skill=15;
                if(me->query_temp("damage-busy1") == 1 ) {
                me->delete_temp("damage-busy1");
                me->set_temp("damage-busy2",1);  }
        if( !me->query_temp("berserk") && !me->query_temp("upforce")
            && 70>random(100) && me->query("class")=="bandit" )
        {
                message_vision(HIG"$N一击得手，$n喷出的鲜血激起了$N的疯狂杀意，内力暴长。\n"NOR, me, victim);
                me->set_temp("oldforce", me->query("force_factor"));
                me->set("force_factor", (4*skill*bellpower)/4);
                me->set_temp("upforce", 1);
                call_out("remove_effect", 10, me);
        }
}

void remove_effect(object me)
{
        if(!me) return ;
        if(me->query("gin")>50) {
        me->receive_damage("gin", 30); }
        me->set("force_factor", me->query_temp("oldforce"));
        me->delete_temp("oldforce");
        me->delete_temp("upforce");
        message_vision(HIW"$N狂意渐退，内力渐渐收回。\n"NOR, me);
}

void berserk(object me, object victim, object weapon, int damage)
{
        int lose, i;
        int bellpower = (int)me->query("bellicosity")/300+1;
        if(bellpower>8)
        bellpower=8;
                if(me->query_temp("damage-busy2")==1) {
                me->delete_temp("damage-busy2"); }
if(me->query("class")=="bandit" && !me->query_temp("berserk") &&
   70>random(100) )
        {
                lose = 4+bellpower;
                me->set_temp("berserk", 1);
                for(i = 0;i < lose; i++)
                {
                        message_vision(HIR"$N打出恶霸掌之连击技，向$n狂风暴雨般横扫而去。\n"NOR, me, victim);
                        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
                me->delete_temp("berserk");
                message_vision(HIW"一阵狂打之后，$N体内气息大乱，赶紧趁机调息。\n"NOR,me);
                me->start_busy(1);
        }
}


string perform_action_file(string action)
{
        return CLASS_D("bandit")+"/badstrike/"+action;
}
