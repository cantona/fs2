inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIY"黄色光晶"NOR,({"yellow-crystal"}));
	set("long","一块略呈黄色的光晶，在光晶上面不时的散发着奇怪的灵光，但任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
	setup();
}
