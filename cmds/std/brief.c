#include <ansi.h>
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
        seteuid(getuid(me));
 
        if (me->query_temp("brief_mode")) {
          me->delete_temp("brief_mode");
          write ("长讯息糢式。\n");
        }
        else {
          me->set_temp("brief_mode",1);
          write ("短讯息糢式。\n");
        }
        return 1;
}
 
int help(object me)
{
        write(@HELP
指令格式 : brief
指令说明 :
           这个指令可以让你以长讯息模式或短讯息模式显示你所看到的东西。
           它是个开关，当你处于长讯息模式时，会切换到短讯息模式，反之
           亦然。也就是会在此两种模式之间切换。
HELP
    );
    return 1;
}
