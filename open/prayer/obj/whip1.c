// 落日鞭
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("落日鞭",({"sun-whip","whip"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","条");
        set("value",30000);
        set("no_sell", 1);     
        set("no_drop", 1);
        set("no_auc", 1);    
	set("material","iron");
	set("rigidity",50);
	set("long",
	"这是霞山派的门人所用的兵器。\n");
	}
	init_whip(80);
	setup();
}
