inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(BLU"闇之纹章"NOR,({"dark-emblem"}));
	set("long","一枚看来一点光彩也没有的奇怪纹章，名为暗之纹章，任你如何的细\n"
		  +"看和研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
