#include <ansi.h>
inherit F_CLEAN_UP;
int main(object me, string arg)
{
	string key, chinz;
	string class1;

        seteuid(geteuid());
	if( !arg || arg=="" )
		return notify_fail("指令格式：unpunlish <受罚者> <刑罚>\n");

	if(sscanf(arg,"%s %s",class1,key)==2){
	PUNLISH_D->remove_translate(class1,key);
	write("解除"+class1+"的"+key+"刑罚\n");

	return 1;
	}
	return 0;
}

int help()
{
	write ( @HELP
指令格式：unpunlish <受罚者> <刑罚>\n
 
HELP
	);
	return 1 ;
}
