inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("不知名的东西",({"unknow item","item"}));
	set("long","一块看起来完全不起眼的东西，握在手中却可以感觉到它的厚实和\n"
		  +"笨重，为醉问天所有的东西，却被神秘飞贼所偷走。\n");
	set("unit","块");
	set("value",100000);
	set("magic-manor",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}