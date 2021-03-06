// nine-steps.c

inherit SKILL;

string *dodge_msg = ({
	"$n身形一转，连点数步，避了开去！\n",
	"$n使出陈家身法中的「蝶影步”闪开$N的攻击！\n",
	"$n连踩十数步，身形连变，躲开$N这一招！\n",
});

int valid_enable(string usage) {
	return (usage=="dodge")||(usage=="move");
}

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("gin")<30)
		return notify_fail("你的精不够，不能练陈家身法。\n");
	me->receive_damage("gin",30);
	return 1;
}
