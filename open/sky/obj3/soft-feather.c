inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIM"柔之絮羽"NOR,({"soft-feather"}));
	set("long","一根看来柔弱似是无力的羽毛，柔软如絮名为柔之絮羽，任你如何的\n"
		  +"细看和研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","根");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
