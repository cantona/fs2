#include <combat.h>
#include <ansi.h>
void movedown(object me,object target,object weapon,int damage);
inherit SKILL;
mapping *action = ({
// 1
(["action":HIW"$N侧身横锄，一招"+HIC"「横云断峰”"HIW+"，手持$w"+HIW+"向$n$l横劈过去。"NOR,
        "damage":       30,
        "dodge":        5,
        "parry":         -5,
        "force":        160,
        "damage_type":  "砍伤",
        ]),
// 2
(["action":HIW"$N翻身回力，手中$w"+HIW+"斜引，一招"+HIR"「归雁啸长空”"HIW+"，刀锋从半空中直泻而下。"NOR,
           "damage":           60,
           "dodge":           10,
           "parry":            -10,
           "force":            160,
           "damage_type":  "劈伤"
          ]),
// 3
(["action":HIW"$N背转身子，一招"+HIB"「夜战八方”"HIW+"，手中$w"+HIW+"迅无伦比的砍向$n$l。"NOR,
           "damage":      80,
           "dodge":          5,
           "parry":         -10,
           "force":          160,
        "damage_type":  "砍伤"
           ]),
// 4
(["action":HIW"$N使出"+HIM"「春云乍展”"HIW+"，手中$w"+HIW+"悄无声的划向$n$l，看似轻如柳絮，却是式中套式，招里藏招。"NOR,
        "damage":          80,
        "dodge":        20,
        "parry":        -20,
        "force":        160,
                "damage_type": "割伤"
            ]),
// 5
(["action":HIW"$N脚尖一点，翩如飞鸟般的跃起一丈多高，使一招"+HIG"「天神倒挂”"HIW+"，由上而下劈往$n的$l。"NOR,
        "damage":    100,
        "dodge":        20,
        "parry":        -20,
        "force":        160,
        "damage_type": "劈伤"
        ]),
// 6
(["action":HIW"$N微一吐劲，力贯刀锋，一招"+HIY"「劈石开山”"HIW+"往$n$l直劈而下。"NOR,
        "damage":       100,
        "force":        160,
        "parry":        -20,
        "dodge":        10,
        "damage_type": "劈伤"
        ]),
// 7
(["action":HIW"$N刀随身转，寒光闪处，一招"+HIC"「倒洒金钱”"HIW+"，攻往$n$l。"NOR,
        "damage":       130,
        "parry":        -10,
        "dodge":        10,
        "force":        160,
        "damage_type": "劈伤"
        ]),
// 8
(["action":HIW"$N气沉丹田，一招"+HIG"「气撼九重天”"HIW+"，刀势笼罩八方，$n顿感气息翻涌，胸口不畅。"NOR,
        "damage":       130,
        "force":        160,
        "parry":        -10,
        "dodge":        10,
        "post_action":          (: movedown :),
        "damage_type":  "砍伤"
        ]),
// 9
(["action":HIW"$N手中$w"+HIW+"一晃，一招"+HIR"「雪拥篮关”"HIW+"，往$n$l直刺而去。"NOR,
        "damage":       160,
        "force":        160,
        "parry":        -10,
        "dodge":        20,
        "damage_type":  "刺伤"
        ]),
// 10
(["action":HIW"$N移步测身，使出一招"+HIB"「游龙绕步”"HIW+"，身行变化莫测，攻向$n$l。"NOR,
        "damage":       160,
        "dodge":        100,
        "parry":        -20,
        "force":        160,
        "damage_type":  "刺伤"
        ]),
});
int valid_learn(object me)
{
        object ob;
        if( (int)me->query("max_force") < 100)
        return notify_fail("你的内力不够，没有办法练紫金六阳刀法。\n");
        if( (string)me->query_skill_mapped("force")!= "sixforce")
                return notify_fail("紫金六阳刀法必须配合六阳心法才能练。\n");
        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "blade")
                return notify_fail("你必须先找一把刀才能练刀法。\n");
        return 1;
}

int valid_enable(string usage)
{
        return (usage=="blade")||(usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

void movedown(object me,object target, object weapon,int damage)
{
if(me->query("force")<20) return;
if(70>=random(100)) {
        me->add("force",-20);
        message_vision(
        HIG "$N使出「横扫六合”，刀光四面铺开，把$n的整个身形笼罩在刀光之下！\n"NOR,me,target);
      message_vision(GRN"结果$n气息一岔，登时动弹不得！\n"NOR,me,target);
           target->start_busy(1);
          }
           else {
      message_vision(GRN "结果$n往后一跃，躲了过去。\n"NOR,me,target);
}
}

string perform_action_file(string action)
{
if(this_player()->query_skill_mapped("blade")=="gold-blade") {
        return CLASS_D("blademan")+"/gold-blade/"+action;
}
}
