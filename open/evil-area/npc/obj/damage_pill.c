inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"骨蛊蛹"NOR,({"bon-gu pupa","pupa"}));
        set("long",
"邪灵界的产物, 以万蛊相斗的道理, 找出所有蛊种最强的蛊虫, 然后使用密法
将其退化成可食用的蛊蛹, 每种蛊虫都有不同的用法, 此种蛊蛹服食后, 生长
于服食者体内, 其成长成蛊虫时, 会散发出一种恶臭, 可以避免受到一些潜藏
的虫类攻击。\n");
	set("unit","堆");
        set("base_unit", "颗");
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
		i = (int)me->query_condition("evil_pill01");

        if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;
        message_vision("$N服食了一颗虫蛹。\n",me);
	me->apply_condition("evil_pill01", i+5);
        add_amount(-1);
        return 1;

}
