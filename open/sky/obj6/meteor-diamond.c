inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIC"流星之瞬钻"NOR,({"meteor-diamond"}));
	set("long","一颗奇怪的钻石，似乎并不怎么值钱，上面刻画着流星的图案，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","颗");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
