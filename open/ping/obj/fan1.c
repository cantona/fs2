// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("灵动扇",({"aura fan","fan"}) );
        set_weight(8000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","古时万物皆有灵气, 灵动之扇便是附着大地精灵之气, 若有灵气乍现。\n");
        set("unit","把");
        set("value", 9000);
        set("material","blacksteel");
	}
        init_stabber(70);
        setup();
}
