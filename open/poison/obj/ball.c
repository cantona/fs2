#include <weapon.h>
#include <ansi.h>
inherit THROWING;


void create()
{
	set_name("铁蒺藜", ({"iron ball", "ball"}) );
	if ( clonep() )
 		set_default_object(__FILE__);
	else{
		set("long", "
一钢制的小圆球，上面布满了尖刺，为江湖中人常用
的暗器之一。\n");
		set("unit","些");
		set("material","steel");
		set("base_unit","颗");
		set("base_weight",50);
		set("base_value",10);
		
            }
        set_amount(10);
	init_throwing(3);
	setup();
}
