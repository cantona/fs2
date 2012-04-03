
#include <ansi.h>
#include <weapon.h>
inherit WHIP;

void create()
{
	set_name("七彩如意索",({"rainbow rope","rope"}) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit","条");
		set("value",1000);
		set("material","crimsonsteel");
		set("wield_msg","$N将武器抽出一抖，七彩如意索发出七色不同的光芒笼罩四周。\n");
		set("unwield_msg","$N将如意索放下，七色光芒亦随之消失。\n");
		set("long","
一条会散发出七色不同光芒的如意索。\n");
		}
	init_whip(50);
	setup();
}
