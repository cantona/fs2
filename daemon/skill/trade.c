// trade.c

inherit SKILL;
int valid_learn(object me)
{
     return notify_fail("这样技能只能靠交易行为增加熟练度。\n");
}
