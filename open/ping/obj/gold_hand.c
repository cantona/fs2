inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIY"金织手套"NOR,({"golden hands","hands"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
以金丝织成的珍贵手套，其中似乎隐藏着某种魔力。
");
        set("unit", "双");
        set("value",100000);
        set("material","cloth");
        set("armor_type", "hands");
        set("armor_prop/armor",5);
        set("armor_prop/attack", 5);
        set("armor_prop/dodge",3);
        }
        setup();
}

