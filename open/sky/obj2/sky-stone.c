inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"天尊石"NOR,({"sky-stone"}));
	set("long","一颗看来带点光亮的奇怪石头，名为天尊石，任你如何的细看和\n"
		  +"研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","颗");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
