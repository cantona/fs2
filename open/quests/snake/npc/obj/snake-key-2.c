inherit ITEM;
#include <ansi.h>

void create()
{
	set_name(HIC"蛇型雕像"NOR,({"snake statue","statue","snake-key-2"}));
	set_weight(300);
	set("long","这是一个小型的蛇型雕像，似乎是用来开启某扇门。\n");
	set("unit","个");
	set("value",300);
	setup();
}
