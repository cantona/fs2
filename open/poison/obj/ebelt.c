#include <ansi.h>
inherit EQUIP;


void create()
{
	set_name("蛛丝腰带", ({"silk belt", "belt"}) );
	set_weight(200);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long", "一条由蜘蛛丝织成的腰带,相当奇特.\n");
		set("material", "cloth");
		set("unit", "条");
		set("value", 100);
		set("armor_type", "waist");
		set("armor_prop/armor", 3);
                setup();
	}
}  
