inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIM"幻之纹章"NOR,({"magic-emblem"}));
	set("long","一枚你几乎快要不能掌握的奇怪纹章，若虚若幻，名为幻之纹章，\n"
		  +"任你如何的细看和研究，却也不知它有何作用，也许和传说中的传\n"
		  +"说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
