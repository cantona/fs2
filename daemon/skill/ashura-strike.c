//修罗霸拳(Ashura-rike) Edit by del
#include <ansi.h>
inherit SKILL;

mapping *action = ({
        ([      "action":       
"$N使出修罗霸拳第一式"HIR"‘杀’"NOR"，脚下步伐越走越快，令$n无法捉摸，"
"只见$N的双拳以迅雷不及掩耳的速度攻击$n",
                "damage":80,
                "dodge":10,
                "damage_type": "瘀伤"
        ]),
        ([      "action":       
"$N暴吼一声，将真气灌注在拳头，使出修罗霸拳第二式"HIB"‘破’"NOR"，强猛"
"沈厚的拳劲以排山倒海之势挥向$n的$l",
                "damage":80,
                "dodge":20,
                "damage_type": "瘀伤"
        ]),
        ([      "action":       
"$N暗运内劲，以手为刃，顺势使出修罗霸拳第三式"HIB"‘灭’"NOR"，攻势犹如"
"如水银泻地般从各个方向攻击$n",
                "damage":100,
                "dodge":10,
                "damage_type": "内伤"
        ]),

        ([      "action":
"$N将修罗霸拳第四式"HIR"‘绝’"NOR"引发的熊熊烈焰引到自己的双拳之上，正"
"当$n错愕之际，无穷的的攻势已如迅雷疾风般攻击$n",
                "damage":100,
                "dodge":10,
                "damage_type": "瘀伤"
        ]),

        ([      "action":
"$N将全身杀气释放，使出修罗霸拳第五式"HIR"‘断’"NOR"，内含无穷杀意的拳"
"势就像一把锋利的巨刃般要将$n拦腰斩断",
                "damage" : 150,
                "dodge"  :  10,
                "damage_type" : "内伤"
        ]),

});

int valid_enable(string usage)
{
        return (usage=="unarmed") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

