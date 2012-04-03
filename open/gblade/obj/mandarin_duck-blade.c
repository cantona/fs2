#include <weapon.h>
inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("鸳鸯刀" ,({"mandarin duck blade","blade"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "对");
        set("long","刀柄上结着一对金银丝编成的鸳鸯结，刀鞘上也刻着一对鸳鸯，看域
像是装饰用的刀。
\n");

	set("value",8000);
        set("material", "steel");
       
        }
	init_blade(50);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 50);
	set("ski_level2", 40);
        setup();
}
int wield()
{
     if ((string)this_player()->query("gender") !="女性")
           return notify_fail("女孩子用的刀....大男生用不太好吧？\n");
     else {
           ::wield();
            set("wield_msg","$N把刀拿在手中，觉得轻重合适，满趁手的。\n");
        set("unwield_msg", "$N做了一个很俊俏的姿势，把刀收回刀鞘之中。\n");
          }
     return 1;
}
