
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIG"铁布衫"NOR,({"steel cloth","cloth"}) );
        set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
else	{
        set("meterial","gold");
	set("unit","件");
        set("value", 10000);
	set("armor_type","cloth");
	set("armor_prop/armor", 50);
		set("armor_prop/parry",10);
	set("armor_prop/dodge",-7);
	set("long","
这件是由千年软铁打造的背心，防御力奇高但却异常沈重。
");
	}
	setup();
}
