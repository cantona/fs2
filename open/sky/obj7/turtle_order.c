inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG"玄武结令"NOR,({"turtle-order"}));
	set("long","一个奇怪的结令，看上去并不值钱，似乎代表着某种权力象征，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
