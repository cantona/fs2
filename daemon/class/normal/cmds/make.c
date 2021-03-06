// make.c

#include <skill.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	string type,name,ob_name;
	object ob;

	// We might need to load new objects.
	seteuid(getuid());
	if(me->is_fighting() ) return notify_fail("战斗中不能制造东西。\n");
	if( (int)me->query("sen") < 30 )
		return notify_fail("你的精神太差，不能制造东西。\n");

	if( !arg
	||	sscanf(lower_case(arg),"%s %s",ob_name,name)!=2)
		return notify_fail("指令格式：make <种类> <物品>\n");


	if( stringp(type = me->query_skill_mapped(ob_name))) {
		if(SKILL_D(type)->make(me,name)){
			if (me->is_fighting()) me->start_busy(1);
			me->recieve_wound("kee", 2);
			me->recieve_damage("sen", 10);
			return 1;
		}
		return 0;
	} else 
		return notify_fail("你请先用 enable 选择你的特殊技能。\n");

	return 1;
}

int help (object me)
{
        write(@HELP
指令格式：make <种类> <物品>

HELP
        );
        return 1;
}
