#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
	object obj,ob;
	string st1,st2;
	if(!arg||sscanf(arg,"%s in %s",st1,st2)!=2)
		return notify_fail("指令格式：putpoison <毒> in <物品>\n");
	if(!(ob=present(st1,me)))
		return notify_fail("你的身上没有这种毒。\n");
	if(!(obj=present(st2,me))&&st2!="water"&&environment(me)->query("resource/water")!=1)
		return notify_fail("这里没这个东西。\n");

	if(obj==me) return notify_fail("对自己下毒 ?\n");
	if(!ob->query("poison_type"))
		return notify_fail("这是毒吗 ?\n");
	
	message_vision(
	"$N鬼鬼祟祟的在"+obj->name()+"下毒。\n",me);
	ob->add_amount(-1);
	obj->set("get_poison",ob->query("poison_type"));
	obj->set("poison_power",ob->query("poison_power"));
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
指令格式：putpoison <毒> in <物品>
 
说明：在某物品中下毒。
 
HELP
   );
   return 1;
}
