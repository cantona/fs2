// bleed_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("拂尘",({ "dest whip","whip"} ));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","条");
	  set("value",100);
		set("material","iron");
		set("long",
	"这是一只拂尘。\n");
	}
	init_whip(5);
	setup();
}
