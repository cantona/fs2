// haoforce.c
#include <ansi.h>
inherit SKILL;
inherit SSERVER;


int valid_enable(string usage) { return usage=="force"; }
  int valid_learn(object me) { return 1; }


int practice_skill(object me)

 {
             return notify_fail("浩日心法只能用学的，或是从(exert)中获的熟练度。\n");
}
string perform_action_file(string action)
{
return CLASS_D("fighter")+"/haoforce/"+action;
}
string exert_function_file(string func)
{
       return CLASS_D("fighter")+"/haoforce/"+func;
}
