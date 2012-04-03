// bleed_whip.c
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name(HIR "血龙鞭" NOR,({"bleed whip","whip"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","条");
          set("value",30000);
		set("material","iron");
		set("long",
	"这条鞭子上面充满血色，握柄上有一只龙头。\n");
	}
	init_whip(80);
	setup();
}
