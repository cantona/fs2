
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("金圈",({"golden circle","circle"}));
	set_weight(5000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一对对以纯金打造而成的金圈，套在小腿上美观又可增添防御性，走起路来声音
铿锵，十分动听。\n");
		set("unit","个");
		set("value",1000);
		set("armor_prop/armor",9);
		set("armor_prop/parry",6);
		set("material","gold");
		set("armor_type","boots");
		setup();
	}
}
