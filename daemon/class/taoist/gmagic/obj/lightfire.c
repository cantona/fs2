
inherit ITEM;
#include <ansi.h>

void create()
{
        set_name("星光之火", ({ "lightfire", }) );
        set_weight(1);
          set("unit", "枚");
          set("long", "由法力形成的小小火球，可以拿来照明。\n");
          // light_up 大于 0 表示可以燃烧的心跳数
          set("light_up", 300);
          set("burned","快熄灭的");
          set("had_light",1);
	  set("no_auc",1);
        setup();
}
