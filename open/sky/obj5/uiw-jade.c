inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIC"瑶光星玉"NOR,({"uiw-jade"}));
	set("long","七星玉中的瑶光星玉，带点星光的流动气息闪烁迷人，但任如如何的\n"
		  +"细看和研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
