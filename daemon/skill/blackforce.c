// sea-force.c
#define SK_EXERT    "/open/killer/include/sk_exert"
inherit SK_EXERT;
void force_damage(object me, object victim, object weapon, int damage);

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) 
{ 
	return 1; 
}

mapping *force_action = ({
([      "post_action": (: force_damage :) ])
});

int practice_skill(object me)
{
	return notify_fail("黑牙神功只能用学的，或是从运用(exert)中增加熟练度。\n");
}

string exert_function_file(string func)
{
	return CLASS_D("killer")+"/blackforce/"+func;
}

