inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG"松灵之印"NOR,({"pine-yin"}));
	set("long","一块注有松之灵印，在灵印上面不时的闪烁着一点奇怪的灵光，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
