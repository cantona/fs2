// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("晨曦玉如意", ({ "morning jade", "jade" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "入手温凉的一块玉如意, 上头浮现着朵朵云彩, 隐隐有晨曦刹现的样子。\n");
	  set("unit", "块");
          set("value", 1000);
          set("material", "gem");
	  set("armor_type","neck");
	  set("armor_prop/armor", 5);
	}
	setup();
}

