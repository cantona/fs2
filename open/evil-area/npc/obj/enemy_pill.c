inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIB"恶蛊卵"NOR,({"evil-gu ovum","ovum"}));
        set("long",
"邪灵界的产物, 以万蛊相斗的道理, 找出所有蛊种最强的蛊虫, 然后使用密法
将其退化成可食用的蛊卵, 每种蛊虫都有不同的用法, 此种蛊卵服食后, 服食
者体内会产生一股令邪灵界虫类厌恶的味道，使得虫子退避三舍。\n");
	set("unit","堆");
        set("base_unit", "条");
	set("value",500000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
add_action("eat_pill", "eat");
}

int eat_pill(string arg)
{
        object ob,me;
	int i;

		me = this_player();
		i = (int)me->query_condition("evil_pill02");

        if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;
        message_vision("$N服食了一条蛊卵。\n",me);
	me->apply_condition("evil_pill02", i+5 );
        add_amount(-1);
        return 1;

}
