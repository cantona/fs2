//修罗心法

#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }
  
int practice_skill(object me)
{
        return notify_fail("修罗心法只能从运用(exert)中增加熟练度。\n");
}

void skill_improved(object me)

{
        int s;

        tell_object(me, HIW "你头上冒起一股"HIM"绿色"HIW"的冥殿气劲,你的修罗心法又更进一层了!! \n"NOR);
}
string exert_function_file(string act)
{

  return CLASS_D("common/") + act;
}

string perform_action_file( string func)
{
   return PERFORM_D("fiendforce/") + func;
}


