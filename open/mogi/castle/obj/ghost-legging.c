// 八指飞魔eq exp 160万

#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name(HIW"妖行甲"NOR,({"ghost legging","legging"}));
	set_weight(3000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","一件泛着银白妖光的胫甲。\n");
        set("unit","件");
	set("value",50000);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor",5);
	set("armor_prop/move",3);
        set("armor_prop/dodge",5);
	}
        setup();
}
