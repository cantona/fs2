
#include <ansi.h>
#include <weapon.h>
inherit STICK;

void create()
{
	set_name("烟管",({"pipe"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","
吸烟时所用的烟管，亦可勉强用来当武器使用。\n");
	set("material","iron");
	set("value", 10);
	set("unit","根");
	}
	init_stick(1);
	setup();
}

