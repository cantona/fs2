#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
    string cls;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("指令格式：delguild <职业代码> <门派名称>\n");

    if(sscanf(arg,"%s %s",cls,key)==2){
    GUILD_D->remove_translate(cls,key);
	write("删除一个门派"+key+"。\n");

	return 1;
	}
	return 0;
}

int help()
{
	write ( @HELP
指令格式：delguild <职业代码> <门派名称>
 
HELP
	);
	return 1 ;
}
