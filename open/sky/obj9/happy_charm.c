inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIY"快乐之符"NOR,({"happy-charm"}));
	set("long","一块名为快乐之符，上面刻着奇形怪状的文字包围着快乐两字，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
