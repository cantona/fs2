inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("信",({"letter",}));
	set("long","醉问天写给林宏升的一封信件。\n");
	set("unit","封");
	set("value",100000);
	set("magic-manor",2);
	set("no_sac",1);
	set_weight(1000);
        setup();
}