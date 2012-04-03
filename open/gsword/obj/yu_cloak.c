// ph_hat.c
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("寒梅披风",({"yu surcoat","surcoat"}));
	set_weight(1000);
	set("armor_type","cape");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "件");
                set("long","唐钰的披风，是梅影所赠\n");
		set("value",30000);
		set("material","leather");
		set("armor_prop/armor",10);
                set("armor_prop/dodge", 5);
                set("armor_prop/move", 5);
        }
        setup();
}
