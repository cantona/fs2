// K_cloth.c
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIY "龙袍" NOR,({"king cloth","cloth"}) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","这是天子所穿着的，上面绣着精致的九纹龙图腾。\n");
        set("unit","件");
        set("value",25000);
        set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor",18);
        set("armor_prop/dodge", 10);
        set("armor_prop/force",10);
        set("armor_prop/attack",30);
        }
        setup();
}
