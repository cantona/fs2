//book.c

#include <ansi.h>
inherit ITEM;

void create()
{
   set_name(HIW"六脉神剑经"NOR,({"six book","book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
"这本书乃是记载大理段式奇功‘六脉神剑’的宝经。\n");
		set("value",800);
		set("material", "paper");
}
        setup();
}
