// 解谜用item

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("三叶仙兰之叶", ({ "three_leaf" }));
	set_weight(5);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "片");
		set("long",
"传说中的三叶仙兰之叶，据说有辟毒之效。\n");
		set("value", 1000000);
		set("material", "paper");
	}
        setup();
}
 
