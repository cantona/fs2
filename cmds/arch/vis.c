// vis

inherit F_CLEAN_UP;

#include <ansi.h>

int main(object me)
{

	if( me->query("env/invis") )
  {
		me->delete("env/invis");
        message_vision(HIW + "$N突然从空气中走了出来。\n" + NOR, me);
  } else
        printf("你并没有穿隐身衣。\n");
  return 1;
}

int help(object me)
{
write(@HELP
指令格式 : vis
 
这个指令会让巫师得以现形
 
HELP
    );
    return 1;
}
