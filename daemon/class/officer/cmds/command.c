// order.c

#include <skill.h>

inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	string type,name,ob_name;
	string st1;
	string file;
	object ob;

	// We might need to load new objects.
	seteuid(getuid());

	if( (int)me->query("sen") < 30 )
		return notify_fail("你的精神太差，无法下命令。\n");

	if( !arg
	||	sscanf(arg,"%s %s",ob_name,name)!=2)
		return notify_fail("指令格式：command <npc> <命令>\n");
	arg = lower_case(arg);

	ob=present(ob_name,environment(me));
	if(!ob) return notify_fail("这里没这人。\n");
	if(!living(ob)) return notify_fail("那是生物吗 ?\n");
	if(ob->query("class")!="officer") return notify_fail("你不能对他下命令。\n");
	if(ob->query("officer_power")>me->query("officer_power"))
		return notify_fail("你的权力不够，无法命令他。\n");
	if(ob->query("officer_power")/2>me->query("relation/"+ob->query("id")+"/value"))
		return notify_fail("你和他的关系不够。\n");

	sscanf(name,"%s %s",name,st1);
	if( stringp( type = me->query_skill_mapped("be-officer"))) {
		if(file=SKILL_D(type)->command_file(name))
		{
			me->receive_damage("sen", 30);
			if(file_size(file+".c")<=0)
				return notify_fail("你所学的政治之术中没这样命令。\n");
			file->do_command(me,ob,st1);
			return 1;
		}
		return notify_fail("你所学的政治之术中没这样命令。\n");
	} else 
		return notify_fail("你请先用 enable 选择你的特殊技能。\n");

	return 1;
}

int help (object me)
{
        write(@HELP
指令格式：order <npc> <命令>
说明：对朝廷命官下达命令。

HELP
        );
        return 1;
}
