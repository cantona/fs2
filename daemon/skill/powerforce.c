// iceforce.c2

inherit SKILL;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{ return 1; }

int practice_skill(object me)
{
	return notify_fail("玄阳神功只能用学的，或是从(exert)中增加熟练度。\n");
}

string exert_function_file(string func)
{
	return CLASS_D("blademan")+"/powerforce/"+func;
}

