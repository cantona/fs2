#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
    string cls;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("指令格式：addguild <职业代码> <门派名称> <门派领袖>\n");

    if(sscanf(arg,"%s %s %s",cls,key,chinz)==3){
        GUILD_D->add_translate(cls,key,chinz);
		write("增加一个新门派"+key+"。\n");
		return 1;
	}
	

	return 0;
}

int help()
{
	write ( @HELP
指令格式：addguild <职业代码> <门派名称> <门派领袖>
 
HELP
	);
	return 1 ;
}
