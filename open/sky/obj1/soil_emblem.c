inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(YEL"土之纹章"NOR,({"soil-emblem"}));
	set("long","握在手中可以感觉到大地的气息不断地从中飘来，一枚称为土之纹章\n"
		  +"的奇怪东西，任你如何的细看和研究，却也不知它有何作用，也许和\n"
		  +"传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
