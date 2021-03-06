// rain-throing.c
// By Swy 最后修正 QC 98/6/23
// 加强威力以符现今 fs by swy
// 稍微修改提升威力 by unfinished
#include <combat.h>
#include <ansi.h>
inherit SKILL;
void throw_weapon(object,object,object,int);
mapping *action = ({
        ([      "action":               "$N将手中$w用力一郑，一招「"HIY"点星雨"NOR"”，只见一道白光往$n$l射去",
                "dodge":        -30,
                "damage":       50,
                "force":        50,
                "parry":        -30,
  "damage_type" : "射伤",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$N手中散出一道白光，一招「"HIC"散雷风"NOR"”$w飘浮不定的往$n$l而去",
                "dodge":        -30,
                "damage":       60,
                "force":        60,
                "parry":        -30,
  "damage_type" : "射伤",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$N一招「"HIW"星灯万雨"NOR"”，射出的$w散出无数残影往$n而去",
                "dodge":        -30,
                "damage":       70,
                "force":        70,
                "parry":        -30,
   "damage_type" : "射伤",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":               "$N一招「"HIG"殁\神抢亲"NOR"”，射出的$w有如俇鹰雄飞，往$n$l直奔而去",
                "dodge":        -40,
                "damage":       100,
                "force":        100,
                "parry":        -40,
    "damage_type" : "射伤",
                "post_action":  (: throw_weapon :),
        ]),
        ([      "action":              "$N一招「风起云涌”，射出的$w以极端的速度飞往$n的$l去",
                "dodge":        -55,
     "damage_type" : "射伤",
                "damage":       150,
                "force":        150,
                "parry":        -50,
                "post_action":  (: throw_weapon :),
        ]),
});

int valid_learn(object me)
{
        object ob;

        if(me->query_skill("throwing",1)<20)
                return notify_fail("要练霸雨螫魂要先有相当的暗器基础。\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type")!="throwing")
                return notify_fail("你手上要有暗器才能练霸雨螫魂。\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="throwing" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return notify_fail("你的内力或气不够，不能练霸雨螫魂。\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("killer")+"/rain-throwing/"+action;
}
void throw_weapon(object me, object victim, object weapon, int damage)
{
int am;
if( objectp(weapon) ) 
{
if( (int)weapon->query_amount()==1 ) 
{
weapon->unequip();
tell_object(me, "\n你的" + weapon->query("name") + "用完了！\n\n");
}
    //此为Leei加的
else  
{
am=random(3)+1;
if ((int)weapon->query_amount() >30 &&random(
me->query_skill("rain-throwing",1)+me->query_skill("throwing",1)) >=
random(300) && (int)me->query("force") > 20)  
{
victim->receive_damage("kee",50+am*me->query_skill("rain-throwing",1));
me->add("force",-20);
message_vision(sprintf(HIC"$N再抓起一把"+weapon->query("name")+""+HIC+"对准$n快速地射去,$n躲避不及,全部命中。\n"NOR),me,victim);
weapon->add_amount(-am);
}
if (random(me->query_skill("rain-throwing",1)) > 55 && (int)weapon->query_amount() >30 && me->query("quest/island") >0)
{
if (me->query_temp("star_kill")!=1) me->set_temp("star_kill",1);
COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
me->delete_temp("star_kill");
}
COMBAT_D->report_status(victim);
}
    //到此为止
weapon->add_amount(-1);
}
}
