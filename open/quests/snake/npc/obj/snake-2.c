#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIG"蛇身模组"NOR,({"snake body","body","c-snake-2"}));
	set_weight(100);
	set("long","
这是一个蛇的身体部分，还欠缺蛇头与蛇尾，才能组合(compose)
成一条完整的蛇。\n");
	set("unit","个");
	set("value",100);
setup();
}