// torch
#include <weapon.h>

inherit STABBER;

void create()
{
        set_name("木头", ({ "torch", }) );
	set_weight(1000);
          set("unit", "根");
          set("long", "一根可以当材烧的木头，也许你可以用来照明，"+
		      "平时也可以拿来打人。\n");
	  // light_up 大于 0 表示可以燃烧的心跳数
          set("light_up", 200);
	  set("burned", "快烧光的");
	  set("value", 10);
	  set("material", "wood");
	  set("wield_msg", "$N「唰”地一声抽出一根$n握在手中。\n");
	  set("unwield_msg", "$N将手中的$n随手一放。\n");
	init_stabber(5);
	setup();
}
