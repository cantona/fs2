inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(YEL"茄汁拌饭"NOR,({"food","evil-foods"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",10);
		set("base_unit","盘");
		set("unit","大盘");
		set("long","这是由钰萍姊所精心调制的食物之一，不过...似乎不是普通人所能〔吃〕的下口...\n");
	}
	set_amount(1);
setup();
}