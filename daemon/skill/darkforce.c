#include <ansi.h>
inherit SKILL;
inherit SSERVER;

void force_damage(object me, object victim, object weapon, int damage);

int valid_enable(string usage) { return usage=="force"; }


mapping *force_action = ({
([      "post_action": (: force_damage :) ])
});

int practice_skill(object me)
{
        return notify_fail("真˙黑牙神功只能从运用(exert)中增加熟练度。\n");
}
string perform_action_file(string action)
{
        return CLASS_D("killer")+"/ninja-force/"+action;
}
int valid_learn(object me)
{
tell_object(me,"真˙黑牙神功无法从学习中获得进展, 必须自己修行方有成果!!\n");
return 0;
}