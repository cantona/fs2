// wood-force by sueplan

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return notify_fail("木诀心法只能用学的，或是从运用(exert)中增加熟练度。\n");
}

string perform_action_file( string func)
{
        return CLASS_D("bonze")+"/woodforce/"+func;
}

