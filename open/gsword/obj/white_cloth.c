// by roger
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( "白素之袍",({"white cloth","cloth"}));
        set("long","李逍遥所穿的袍子，发出闪亮的白光。\n");
	set_weight(1000);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
		set("value",30000);
                set("material","cloth");
                set("armor_prop/armor",14);
               set("armor_prop/dodge",3);
                set("armor_prop/move",3);
        }
        setup();
}
