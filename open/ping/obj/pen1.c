// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("流银笔",({"silver pen","pen"}) );
        set_weight(20000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long",".\n");
        set("unit","支");
        set("value", 1000);
        set("material","blacksteel");
	}
        init_stabber(50);
        set("wield_msg", "$N从腰间抽出流银笔握住。\n");
        setup();
}
