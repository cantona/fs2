#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
      if(me->query("mark/love")!=1)  return notify_fail("练情倾七式需经高人指点。\n");
      else return 1;
}

int practice_skill(object me)
{
        return notify_fail("情倾七式只能从运用(exert)中增加熟练度。\n");
}
void skill_improved(object me)
{
        tell_object(me,HIW"一阵冰箔笼罩你的全身，你的情倾七式更加熟练了!! \n"NOR);

}
string exert_function_file(string act)
{
 return CLASS_D("poisoner") +"/loveforce/"+act; 
}

string perform_action_file( string func)
{
   return CLASS_D("poisoner") + "/loveforce/"+func;
}

