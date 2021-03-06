// dragonforce by chan
#include <ansi.h>

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int practice_skill(object me)
{
        return notify_fail("降龙心法只能用学的，或是从运用(exert)中增加熟练度。\n");
}

string exert_function_file(string func)
{
        return CLASS_D("beggar") + "/dragonforce/" + func;
}

void skill_improved(object me)
{
        int s;
        tell_object(me, HIW "你的脸色由青变红、红变青降龙心法的修为更进一步了。\n" NOR);
        s = me->query_skill("badforce", 1);
        if( s%10==9 && random(s)>(int)me->query("max_force")/30) {
                tell_object(me, HIW "一股降龙内劲从丹田发出散入全身，使你的内功修为提高了。\n" NOR);
                me->add("max_force", random((int)s/30)+1);
        }
}
