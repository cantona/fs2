#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
        string key, chinz;
 
        seteuid(geteuid());
    if(wizhood(me)!="(admin)" && wizhood(me)!="(manager)") 
          return notify_fail("只有技能管理者才能通过技能。\n");
         if( !arg || arg=="" )
                return notify_fail("指令格式：skillpass <技能代码> <门派名称>\n"
);
 
        if(sscanf(arg,"%s %s",key,chinz)==2){
                F_SKILL_D->add_translate(key,chinz);
                write("skill "+key+" pass\n");
                return 1;
        }
 
 
        return 0;
}
 
int help()
{
        write ( @HELP
指令格式：skillpass <技能代码> <门派名称>
 
HELP
        );
        return 1 ;
}
