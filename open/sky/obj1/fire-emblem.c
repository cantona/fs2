inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"炎之纹章"NOR,({"fire-emblem"}));
	set("long","一枚看来带点火的光亮的奇怪纹章，略带点火热的温度，任你如何的\n"
		  +"细看和研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
