#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
	string class1;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("指令格式：punlsih <受罚者> <刑罚>\n");

	if(sscanf(arg,"%s %s",class1,key)==2){
		switch(key)
		{
		case "no_call" :
			PUNLISH_D->add_translate(class1,key,"no_call");
			break;
		default :
			return notify_fail("没有这种刑罚。\n");
		}

		return 1;
	}
	

	return 0;
}

int help()
{
	write ( @HELP
指令格式：punlish <受罚者> <处罚>
 
HELP
	);
	return 1 ;
}
