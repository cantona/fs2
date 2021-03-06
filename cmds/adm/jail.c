// jail.c
#include <ansi.h>
#define JAIL_ROOM "/open/wiz/jail.c"

int main(object me, string arg)
{
	object ob;
	string player,reason;
	int days;

	//seteuid(getuid());

	if (!arg) return notify_fail("<Syntax>: jail <使用者id> <时间> because <原因>\n");

	if( sscanf(arg, "%s %d because %s", player, days, reason)!=3 ) {
		return notify_fail("<Syntax>: jail <使用者id> <时间> because <原因>\n");
	}
	if (days<=0) days=1;

	if ( ! (ob = find_player(player)) )
		return notify_fail("咦... 有这个人吗?\n");
	tell_room(environment(ob),"天空中伸出一只大手把"+
		(string)ob->query("name")+"抓了起来, 然后不见了.\n", ob);
	tell_object(ob,"一只手把你抓了起来, 你眼前一阵黑....\n");
	ob->move(JAIL_ROOM);
	ob->set("startroom", base_name(environment(ob)));
	message("system",HIY + "\t\t"+(string)ob->query("name")+" 因为 "+
		reason + " 被 "+
		(string)me->query("name")+" 抓去关到监牢关"+days+"天\n" NOR,users());
	log_file("JAIL",sprintf("%s 因为 %s 关 %s(%s) %d天 于%s\n",
	me->name(1), reason,ob->name(1), geteuid(ob), days, ctime(time()) ) );

        ob->set("tmp_title", ob->query("title"));
       ob->set("title",HIG"犯了"HIR"["HIW+reason+HIR"]"HIG"的犯人"NOR);
	tell_object(me, "你把"+(string)ob->query("name")+"抓到监牢关起来.\n");
	tell_object(ob,".... 醒来时发现是"+(string)me->query("name")+
		"把你关到监牢.\n");
	tell_room(environment(ob),(string)ob->query("name")+"突然出现"+
		"在你眼前\n",({me,ob}));
	//ob->set("out_jail_time",ob->query("mud_age")+days*60*1);//一天86400分
	ob->set("jail_time",ob->query("mud_age")+days*60*60*24);//一天86400分
	ob->save();
	return 1;
}

int help(object me)
{
	write(@HELP
指令格式：jail <使用者id> <时间> because <原因>

把不乖的 user 关起来。
HELP
	);
	return 1;
}
