inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIW"光之纹章"NOR,({"light-emblem"}));
	set("long","一枚看来泛着一点光茫和隐隐带着光纹的奇怪纹章，任你如何的细看\n"
		  +"和研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
