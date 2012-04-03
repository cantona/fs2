// cname.c

#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;

  if (!arg) return notify_fail("你要替自己取什么名字？\n");
  if (arg=="傅剑寒") return notify_fail("你不能取这个名字");
  {
  }
//  tmp = remove_color (arg);
  if( strlen(arg) > 14 )
    return notify_fail("你的名字真像老太婆的裹脚布，想一个短一点的、响亮一点的。\n");
if( me->query("bank/coin") < 100000000 )
return notify_fail(" 你的存款不足,无法支付费用.\n");
/*
// 应该能取消绰号吧... edit by lys
	if (arg == "none") {
		me->delete("nickname");
		write ("你的绰号取消了.\n");
		return 1; 
	}
*/

  //      arg = trans_color(arg);

	me->set("name", arg );
	write("你花了一粒钻石的代价改名为"+me->name()+"\n");
	me->add("bank/coin", -100000000);
	tell_object(users(),HIW"【系统】"HIC+me->query("id")+HIW"由现在起改名为"HIG+me->name()+"。\n"NOR);
	log_file("cname",sprintf("%s改名为%s于%s\n",
        me->query("id"),me->query("name"),ctime(time())));
	return 1;
}

int help(object me)
{
        write(@HELP
指令格式 : cname <自己的名字>
指令说明 :
           这个指令可以让你为自己取一个响亮的名字。
一次需耗费一粒钻石,请使用中文命名违者砍档..

HELP
        );
        return 1;
}
