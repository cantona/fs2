#include <ansi.h>
inherit SKILL;

void special_force_damage(object me, object victim, object weapon, int damage);
int valid_enable(string usage)  {
        return (usage=="force");
        }
int valid_learn(object me)      {
        return 1;
        }
int practice_skill(object me)   {
return notify_fail("神农琉璃心法只能靠学习(learn)或运用(exert)增加熟练度。\n");
        }
string exert_function_file(string func)   {
return CLASS_D("doctor") + "/shinnoforce/" + func;
}
string perform_action_file(string action)
{
 return CLASS_D("doctor")+"/shinnoforce/"+action;
}
