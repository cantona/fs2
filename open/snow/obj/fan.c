inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIW "羽扇" NOR,({"feature fan","fan"}));
	set("long","这是一支用羽毛作成的扇子。\n");
	set("no_drop",1);
	set("no_give",1);
	set("no_get",1);
	set("unit","支");
	set("value",100);
        setup();
}
